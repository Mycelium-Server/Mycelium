# Plugins [W.I.P.]

Plugins in Mycelium are called mushrooms

## Specification

Extension: `.mushroom`

the file is a compressed Zip archive

Must contain file `mycelium.plugin.json` (plugin metadata)

`/resources` directory stores resources that can use both native code and scripting functions 

`/natives` directory stores native libraries for systems and architectures that are allowed in the plugin metadata

The necessary libraries for native plugin code must be provided through separate plugins to avoid conflicts. In simple words, do not use static linking
