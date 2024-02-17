import json
import string
from pathlib import Path


def to_member_name(string):
    return 'isShort' if string == 'short' else string


def to_class_name(string):
    return ''.join(s.capitalize() for s in string.split('_'))


def write_header(dst, data, block_id):
    cls = to_class_name(dst)
    f = open('generated/' + dst + '.h', 'w+')

    def_state = {}
    if 'properties' in data[block_id]:
        for state in data[block_id]['states']:
            if state.get('default', False):
                def_state = state['properties']
                break

    f.write('#pragma once\n')
    f.write('\n')
    f.write('#include "block.h"\n')
    f.write('\n')
    f.write('class ' + cls + ' : public Block {\n')
    f.write(' public:\n')
    f.write('  ' + cls + '();\n')
    f.write('  ~' + cls + '() override;\n')
    f.write('\n')
    f.write(' public:\n')
    f.write('  [[nodiscard]] short getId() const override;\n')
    f.write('  [[nodiscard]] std::shared_ptr<Block> clone() const override;\n')
    f.write('  ')
    if 'properties' in data[block_id]:
        f.write('\n')
        f.write(' public:\n')
        for prop in data[block_id]['properties']:
            f.write('  enum {\n')
            counter = 0
            for value in data[block_id]['properties'][prop]:
                f.write('    ' + (prop + '_' + value).upper() + ' = ' + str(counter) + ',\n')
                counter += 1
            f.write('  } ' + to_member_name(prop) + ' = ' + (prop + '_' + def_state[prop]).upper() + ';\n')
            f.write('\n')
    f.write('};\n')

    f.close()


def write_source(dst, data, block_id):
    cls = to_class_name(dst)
    f = open('generated/' + dst + '.cpp', 'w+')

    f.write('#include "' + dst + '.h"\n')
    f.write('\n')
    f.write(cls + '::' + cls + '() = default;\n')
    f.write(cls + '::~' + cls + '() = default;\n')
    f.write('\n')
    f.write('short ' + cls + '::getId() const {\n')
    base_id = data[block_id]['states'][0]['id']
    expression = str(base_id)
    if 'properties' in data[block_id]:
        prop_map = {}
        for prop in data[block_id]['properties']:
            counter = 0
            for value in data[block_id]['properties'][prop]:
                prop_map[(prop + '_' + value).upper()] = str(counter)
                counter += 1

        prev_state = {}
        state_changes = {}
        for stateData in data[block_id]['states']:
            if 'properties' in stateData:
                for prop in stateData['properties']:
                    prop_key = to_member_name(prop)
                    prop_value = stateData['properties'][prop]
                    if prop_key not in prev_state:
                        prev_state[prop_key] = prop_value

                    if prop not in state_changes:
                        state_changes[prop] = 0

                    if prev_state[prop_key] != prop_value:
                        prev_state[prop_key] = prop_value
                        state_changes[prop] += 1

        state_changes = dict(sorted(state_changes.items(), key=lambda x: x[1], reverse=True))

        multiplier = 1
        for prop in state_changes.keys():
            expression += ' + ' + to_member_name(prop) + ' * ' + str(multiplier)
            multiplier *= len(data[block_id]['properties'][prop])

        for stateData in data[block_id]['states']:
            if 'properties' in stateData:
                check = expression
                for prop in stateData['properties']:
                    check = check.replace(' ' + to_member_name(prop) + ' ',
                                          ' ' + prop_map[(prop + '_' + stateData['properties'][prop]).upper()] + ' ')

                if eval(check) != stateData['id']:
                    print(expression + ' (' + check + ') != ' + str(stateData['id']))
                    exit(-1)

    f.write('  return ' + expression + ';\n')
    f.write('}\n')
    f.write('\n')
    f.write('std::shared_ptr<Block> ')
    f.write(cls)
    f.write('::clone() const {\n')
    f.write('  std::shared_ptr<')
    f.write(cls)
    f.write('> copy = std::make_shared<')
    f.write(cls)
    f.write('>();\n')
    state_data = data[block_id]['states'][0]
    if 'properties' in state_data:
        for prop in state_data['properties']:
            memb = to_member_name(prop)
            f.write('  copy->')
            f.write(memb)
            f.write(' = ')
            f.write(memb)
            f.write(';\n')
    f.write('  return copy;\n')
    f.write('}\n')

    f.close()


def generate_block_registry(data):
    f = open('generated/block_registry.h', 'w+')

    f.write('#pragma once\n')
    f.write('\n')
    f.write('#include <memory>\n')
    f.write('#include <vector>\n')
    f.write('\n')
    f.write('#include "block.h"\n')
    f.write('\n')
    f.write('class BlockRegistry {\n')
    f.write(' public:\n')
    f.write('  static void init();\n')
    f.write('  static std::shared_ptr<Block> fromID(int);\n')
    f.write('  static std::shared_ptr<Block> newInstanceFromID(int);\n')
    f.write("\n")
    f.write(" private:\n")
    for letter in string.ascii_uppercase:
        f.write("  static void generate" + letter + "();\n")
    f.write('\n')
    f.write(' private:\n')
    f.write('  static std::vector<std::shared_ptr<Block>> registry;\n')
    f.write('};\n')

    f.close()

    f = open('generated/block_registry.cpp', 'w+')

    generator_files = []

    for letter in string.ascii_lowercase:
        generator = open("generated/block_registry_" + letter + ".cpp", "w+")
        generator.write("#include \"block_registry.h\"\n")
        generator.write("\n")
        generator_files.append(generator)

    for blockId in data:
        generator = generator_files[ord(blockId[10]) - ord('a')]
        generator.write('#include "')
        generator.write(blockId[10:])
        generator.write('_block.h"\n')

    for generator in generator_files:
        letter = chr(generator_files.index(generator) + ord('a'))
        generator.write("\n")
        generator.write("void BlockRegistry::generate" + letter.upper() + "() {\n")

    total_blocks = 0
    for blockId in data:
        for state in data[blockId]['states']:
            total_blocks = max(state['id'] + 1, total_blocks)

    for i in range(total_blocks):
        for blockId in data:
            for state in data[blockId]['states']:
                if state['id'] == i:
                    cls = to_class_name(blockId[10:] + "_block")
                    generator = generator_files[ord(blockId[10]) - ord('a')]
                    generator.write('\n')
                    generator.write('  { // ID: ')
                    generator.write(str(i))
                    generator.write('\n')
                    generator.write('    std::shared_ptr<')
                    generator.write(cls)
                    generator.write('> block = std::make_shared<')
                    generator.write(cls)
                    generator.write('>();\n')
                    if 'properties' in state:
                        for prop in state['properties']:
                            generator.write('    block->')
                            generator.write(to_member_name(prop))
                            generator.write(' = ')
                            generator.write(cls)
                            generator.write('::')
                            generator.write((prop + '_' + state['properties'][prop]).upper())
                            generator.write(';\n')
                    generator.write('    registry[')
                    generator.write(str(i))
                    generator.write('] = block;\n')
                    generator.write('  }\n')
                    break
            else:
                continue
            break

    for generator in generator_files:
        generator.write("}")
        generator.close()

    f.write('#include "block_registry.h"\n')
    f.write('\n')
    f.write('void BlockRegistry::init() {\n')

    f.write('  registry.resize(')
    f.write(str(total_blocks))
    f.write(');\n')

    for letter in string.ascii_uppercase:
        f.write("  generate" + letter + "();\n")

    f.write('}\n')
    f.write('\n')
    f.write('std::shared_ptr<Block> BlockRegistry::fromID(int id) {\n')
    f.write('  if (id < 0 || id >= registry.size()) {\n')
    f.write('    return registry[0];\n')
    f.write('  }\n')
    f.write('  return registry[id];\n')
    f.write('}\n')
    f.write('\n')
    f.write('std::shared_ptr<Block> BlockRegistry::newInstanceFromID(int id) {\n')
    f.write('  return fromID(id)->clone();\n')
    f.write('}\n')
    f.write('\n')
    f.write('std::vector<std::shared_ptr<Block>> BlockRegistry::registry;')

    f.close()


def generate():
    Path('generated').mkdir(parents=True, exist_ok=True)

    f = open('res/blocks.json')
    data = json.load(f)

    print('Generating block registry...')
    generate_block_registry(data)

    for blockId in data:
        print('Generating ' + to_class_name(blockId[10:]) + '...')
        write_header(blockId[10:] + '_block', data, blockId)
        write_source(blockId[10:] + '_block', data, blockId)

    f.close()


if __name__ == "__main__":
    generate()
