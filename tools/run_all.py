import os
import sys
import subprocess
from pathlib import Path


def force_link(src, dst):
    try:
        os.link(src, dst)
    except FileExistsError:
        os.remove(dst)
        os.link(src, dst)


if __name__ == "__main__":
    # Run dump-data
    subprocess.run([sys.executable, "dump_data.py"], cwd="dump-data")

    # Run block-generator
    Path("block-generator/res").mkdir(parents=True, exist_ok=True)
    force_link("../license_header.txt", "block-generator/res/license_header.txt")
    force_link("dump-data/data/generated/reports/blocks.json", "block-generator/res/blocks.json")
    subprocess.run([sys.executable, "block_generator.py"], cwd="block-generator")

    # Run item-generator
    Path("item-generator/res").mkdir(parents=True, exist_ok=True)
    force_link("../license_header.txt", "item-generator/res/license_header.txt")
    force_link("dump-data/data/generated/reports/registries.json", "item-generator/res/registries.json")
    subprocess.run([sys.executable, "item_generator.py"], cwd="item-generator")
