import json
import string
import subprocess
from urllib.request import urlopen, urlretrieve
from pathlib import Path


if __name__ == "__main__":
    Path('data').mkdir(parents=True, exist_ok=True)

    print("Loading manifest...")
    manifest = json.loads(urlopen("https://launchermeta.mojang.com/mc/game/version_manifest.json").read())
    targetVersion = {}

    for version in manifest["versions"]:
        if version["id"] == "1.19.2":
            targetVersion = version
            break
    else:
        print("Version not found.")
        exit(-1)

    print("Loading version data...")
    versionData = json.loads(urlopen(targetVersion["url"]).read())

    print("Downloading server...")
    urlretrieve(versionData["downloads"]["server"]["url"], "data/server.jar")

    print("Generating data...")
    subprocess.run(["java", "-DbundlerMainClass=net.minecraft.data.Main", "-jar", "server.jar", "--reports", "--server"], cwd="data")