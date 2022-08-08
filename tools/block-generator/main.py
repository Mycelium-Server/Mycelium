import json
from pathlib import Path


def to_member_name(string):
    return 'isShort' if string == 'short' else string


def to_class_name(string):
    return ''.join(s.capitalize() for s in string.split('_'))


def reformat_license_header(raw):
    new = ["/*"]
    new.extend(" * " + line.rstrip() if line.strip() else " *" for line in raw)
    new.extend([" */", ""])
    return new


header_f = open('res/license_header.txt')
license_header = reformat_license_header(header_f.readlines())
header_f.close()


def write_license(f):
    for line in license_header:
        f.write(line)
        f.write('\n')
    f.write('\n')


def write_header(dst, data, block_id):
    cls = to_class_name(dst)
    f = open('generated/' + dst + '.h', 'w+')

    def_state = {}
    if 'properties' in data[block_id]:
        for state in data[block_id]['states']:
            if state.get('default', False):
                def_state = state['properties']
                break

    write_license(f)
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

    def_id = 0
    for state in data[block_id]['states']:
        if state.get('default', False):
            def_id = state['id']
            break

    write_license(f)
    f.write('#include "' + dst + '.h"\n')
    f.write('\n')
    f.write(cls + '::' + cls + '() = default;\n')
    f.write(cls + '::~' + cls + '() = default;\n')
    f.write('\n')
    f.write('short ' + cls + '::getId() const {\n')
    for stateData in data[block_id]['states']:
        if 'properties' in stateData:
            f.write('  if (')
            checks = []
            for prop in stateData['properties']:
                checks.append(to_member_name(prop) + ' == ' + (prop + '_' + stateData['properties'][prop]).upper())
            f.write(' && '.join(checks))
            f.write(') return ' + str(stateData['id']) + ';\n')
    f.write('  return ' + str(def_id) + ';\n')
    f.write('}\n')

    f.close()


def generate():
    Path('generated').mkdir(parents=True, exist_ok=True)

    f = open('res/blocks.json')
    data = json.load(f)

    for blockId in data:
        print('Generating ' + to_class_name(blockId[10:]) + '...')
        write_header(blockId[10:] + '_block', data, blockId)
        write_source(blockId[10:] + '_block', data, blockId)

    f.close()


if __name__ == "__main__":
    generate()
