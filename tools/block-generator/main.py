import json
from pathlib import Path


def to_class_name(string):
    return ''.join(s.capitalize() for s in string.split('_'))


def write_header(dst, data, block_id):
    cls = to_class_name(block_id[10:])
    f = open('generated/' + dst + '.h', 'w+')

    defState = {}
    if 'properties' in data[block_id]:
        for state in data[block_id]['states']:
            if state.get('default', False):
                defState = state['properties']
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
    if 'properties' in data[block_id]:
        f.write('\n')
        f.write(' public:\n')
        for prop in data[block_id]['properties']:
            f.write('  enum {\n')
            counter = 0
            for value in data[block_id]['properties'][prop]:
                f.write('    ' + value.upper() + ' = ' + str(counter) + ',\n')
                counter += 1
            f.write('  } ' + prop + ' = ' + defState[prop].upper() + ';\n')
            f.write('\n')
    f.write('}\n')

    f.close()


def write_source(dst, data, block_id):
    cls = to_class_name(block_id[10:])
    f = open('generated/' + dst + '.cpp', 'w+')

    defId = 0
    for state in data[block_id]['states']:
        if state.get('default', False):
            defState = state['id']
            break

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
                checks.append(prop + ' == ' + stateData['properties'][prop].upper())
            f.write(' && '.join(checks))
            f.write(') return ' + str(stateData['id']) + ';\n')
    f.write('  return ' + str(defState) + ';\n')
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
