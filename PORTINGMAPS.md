## Steps for porting pokefirered maps

1. Update `data/maps/map_groups.json` and add entry for map to appropriate map group

2. Copy `data/maps/mapnamehere` folder from pokefirered to equivalent in pokefireredemerald

3. Edit `map.json` within that copied folder to remove entries in object_events, warp_events, coord_events, and bg_events

4. Copy entry for map layout from pokefirered's `data/layouts/layouts.json` to pokefireredemerald equivalent
   a. Rename tileset references as neccessary, AdvanceMap is helpful for identifying offsets of tilesets if you use professional header mode
   b. Make sure to check if it shares a tileset with an existing map so you re-use the same tileset name, AdvanceMap is helpful in identifying shared secondary tilesets by using the "Sort by tileset" mode for map listing

5. Copy `data/layouts/mapnamehere` folder from pokefirered to equivalent in pokefireredemerald

6. Add entry in `data/event_scripts.s` like `.include "data/maps/mapnamehere/scripts.inc"` in the list of entries starting around line 73

### Following steps are for adding secondary tilesets:

7. Copy folder in pokefirered's `data/tilesets/secondary` for correct tileset offset identified in AdvanceMap to pokefireredemerald equivalent
	a. Rename to appropriate name e.g. Secondary tileset used for Cerulean City will be named `cerulean`

8. Copy entries for `gTilesetPalettes` and `gTilesetTiles` for same tileset offset (seen in the .incbin filepath) from pokefirered's `data/tilesets/graphics.inc` to pokefireredemerald equivalent
	a. Rename offsets in the filepath to same name in previous step
	b. Rename `gTilesetPalettes_offsethere` and `gTilesetTiles_offsethere` to appropriate name e.g. Secondary tileset used for Cerulean City will be named `gTilesetTiles_Cerulean` and `gTilesetPalettes_Cerulean`
	c. Remove `@ offsethere` for both entries after the `::`

9. Copy entry of correct tileset offset from pokefirered's `data/tilesets/headers.inc` to pokefireredemerald equivalent
	a. Rename `gTileset_offsethere` to appropriate name like previous step part b
	b. Rename `gTilesetTiles` and `gTilesetPalettes` to same name as previous step part b
	c. Rename `gMetatiles_offsethere` to appropriate name like previous step part b
	d. Swap `gMetatilesAttributes_offsethere` with `0x0` or the `sub_offsethere` function and rename appropriately like previous step part b
	e. Change any `0x0` to `NULL`

10. Copy entries of correct tileset offset from pokefirered's `data/tilesets/metatiles.inc`
	a. Rename both entries to same name from previous step part c and d
	b. Rename offsets in filepath to appropriate name e.g. Secondary tileset used for Cerulean City will be named `cerulean`

11. Copy entry for tileset graphic rules from pokefirered's `tileset_rules.mk` to pokefireredemerald's `graphics_file_rules.mk`
	a. Rename offset to same name in previous step part b
	