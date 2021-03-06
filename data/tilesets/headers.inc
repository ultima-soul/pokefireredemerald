	.align 2
gTileset_General:: @ 83DF704
	.byte TRUE @ is compressed
	.byte FALSE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_General
	.4byte gTilesetPalettes_General
	.4byte gMetatiles_General
	.4byte gMetatileAttributes_General
	.4byte InitTilesetAnim_General

	.align 2
gTileset_GeneralKanto::
	.byte TRUE @ is compressed
	.byte FALSE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_GeneralKanto
	.4byte gTilesetPalettes_GeneralKanto
	.4byte gMetatiles_GeneralKanto
	.4byte gMetatileAttributes_GeneralKanto
	.4byte sub_8070154
	
	.align 2
gTileset_BuildingKanto::
	.byte TRUE @ is compressed
	.byte FALSE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_InsideBuildingKanto
	.4byte gTilesetPalettes_InsideBuildingKanto
	.4byte gMetatiles_InsideBuildingKanto
	.4byte gMetatileAttributes_InsideBuildingKanto
	.4byte NULL

	.align 2
gTileset_Pallet::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_Pallet
	.4byte gTilesetPalettes_Pallet
	.4byte gMetatiles_Pallet
	.4byte gMetatileAttributes_Pallet
	.4byte NULL

	.align 2
gTileset_Viridian::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_Viridian
	.4byte gTilesetPalettes_Viridian
	.4byte gMetatiles_Viridian
	.4byte gMetatileAttributes_Viridian
	.4byte NULL

	.align 2
gTileset_Pewter::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_Pewter
	.4byte gTilesetPalettes_Pewter
	.4byte gMetatiles_Pewter
	.4byte gMetatileAttributes_Pewter
	.4byte NULL

	.align 2
gTileset_Cerulean::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_Cerulean
	.4byte gTilesetPalettes_Cerulean
	.4byte gMetatiles_Cerulean
	.4byte gMetatileAttributes_Cerulean
	.4byte NULL

	.align 2
gTileset_Vermilion::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_Vermilion
	.4byte gTilesetPalettes_Vermilion
	.4byte gMetatiles_Vermilion
	.4byte gMetatileAttributes_Vermilion
	.4byte NULL

	.align 2
gTileset_Lavender::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_Lavender
	.4byte gTilesetPalettes_Lavender
	.4byte gMetatiles_Lavender
	.4byte gMetatileAttributes_Lavender
	.4byte NULL
	
	.align 2
gTileset_Celadon::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_Celadon
	.4byte gTilesetPalettes_Celadon
	.4byte gMetatiles_Celadon
	.4byte gMetatileAttributes_Celadon
	.4byte sub_80701D8

	.align 2
gTileset_Fuchsia::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_Fuchsia
	.4byte gTilesetPalettes_Fuchsia
	.4byte gMetatiles_Fuchsia
	.4byte gMetatileAttributes_Fuchsia
	.4byte NULL
	
	.align 2
gTileset_Saffron::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_Saffron
	.4byte gTilesetPalettes_Saffron
	.4byte gMetatiles_Saffron
	.4byte gMetatileAttributes_Saffron
	.4byte NULL

	.align 2
gTileset_Cinnabar::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_Cinnabar
	.4byte gTilesetPalettes_Cinnabar
	.4byte gMetatiles_Cinnabar
	.4byte gMetatileAttributes_Cinnabar
	.4byte NULL
	
	.align 2
gTileset_IndigoPlateauExterior::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_IndigoPlateauExterior
	.4byte gTilesetPalettes_IndigoPlateauExterior
	.4byte gMetatiles_IndigoPlateauExterior
	.4byte gMetatileAttributes_IndigoPlateauExterior
	.4byte NULL

	.align 2
gTileset_Petalburg:: @ 83DF71C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Petalburg
	.4byte gTilesetPalettes_Petalburg
	.4byte gMetatiles_Petalburg
	.4byte gMetatileAttributes_Petalburg
	.4byte InitTilesetAnim_Petalburg

	.align 2
gTileset_Rustboro:: @ 83DF734
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Rustboro
	.4byte gTilesetPalettes_Rustboro
	.4byte gMetatiles_Rustboro
	.4byte gMetatileAttributes_Rustboro
	.4byte InitTilesetAnim_Rustboro

	.align 2
gTileset_Dewford:: @ 83DF74C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Dewford
	.4byte gTilesetPalettes_Dewford
	.4byte gMetatiles_Dewford
	.4byte gMetatileAttributes_Dewford
	.4byte InitTilesetAnim_Dewford

	.align 2
gTileset_Slateport:: @ 83DF764
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Slateport
	.4byte gTilesetPalettes_Slateport
	.4byte gMetatiles_Slateport
	.4byte gMetatileAttributes_Slateport
	.4byte InitTilesetAnim_Slateport

	.align 2
gTileset_Mauville:: @ 83DF77C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Mauville
	.4byte gTilesetPalettes_Mauville
	.4byte gMetatiles_Mauville
	.4byte gMetatileAttributes_Mauville
	.4byte InitTilesetAnim_Mauville

	.align 2
gTileset_Lavaridge:: @ 83DF794
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Lavaridge
	.4byte gTilesetPalettes_Lavaridge
	.4byte gMetatiles_Lavaridge
	.4byte gMetatileAttributes_Lavaridge
	.4byte InitTilesetAnim_Lavaridge

	.align 2
gTileset_Fallarbor:: @ 83DF7AC
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Fallarbor
	.4byte gTilesetPalettes_Fallarbor
	.4byte gMetatiles_Fallarbor
	.4byte gMetatileAttributes_Fallarbor
	.4byte InitTilesetAnim_Fallarbor

	.align 2
gTileset_Fortree:: @ 83DF7C4
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Fortree
	.4byte gTilesetPalettes_Fortree
	.4byte gMetatiles_Fortree
	.4byte gMetatileAttributes_Fortree
	.4byte InitTilesetAnim_Fortree

	.align 2
gTileset_Lilycove:: @ 83DF7DC
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Lilycove
	.4byte gTilesetPalettes_Lilycove
	.4byte gMetatiles_Lilycove
	.4byte gMetatileAttributes_Lilycove
	.4byte InitTilesetAnim_Lilycove

	.align 2
gTileset_Mossdeep:: @ 83DF7F4
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Mossdeep
	.4byte gTilesetPalettes_Mossdeep
	.4byte gMetatiles_Mossdeep
	.4byte gMetatileAttributes_Mossdeep
	.4byte InitTilesetAnim_Mossdeep

	.align 2
gTileset_EverGrande:: @ 83DF80C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_EverGrande
	.4byte gTilesetPalettes_EverGrande
	.4byte gMetatiles_EverGrande
	.4byte gMetatileAttributes_EverGrande
	.4byte InitTilesetAnim_EverGrande

	.align 2
gTileset_Pacifidlog:: @ 83DF824
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Pacifidlog
	.4byte gTilesetPalettes_Pacifidlog
	.4byte gMetatiles_Pacifidlog
	.4byte gMetatileAttributes_Pacifidlog
	.4byte InitTilesetAnim_Pacifidlog

	.align 2
gTileset_Sootopolis:: @ 83DF83C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Sootopolis
	.4byte gTilesetPalettes_Sootopolis
	.4byte gMetatiles_Sootopolis
	.4byte gMetatileAttributes_Sootopolis
	.4byte InitTilesetAnim_Sootopolis

	.align 2
gTileset_BattleFrontierOutsideWest:: @ 83DF854
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_BattleFrontierOutsideWest
	.4byte gTilesetPalettes_BattleFrontierOutsideWest
	.4byte gMetatiles_BattleFrontierOutsideWest
	.4byte gMetatileAttributes_BattleFrontierOutsideWest
	.4byte InitTilesetAnim_BattleFrontierOutsideWest

	.align 2
gTileset_BattleFrontierOutsideEast:: @ 83DF86C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_BattleFrontierOutsideEast
	.4byte gTilesetPalettes_BattleFrontierOutsideEast
	.4byte gMetatiles_BattleFrontierOutsideEast
	.4byte gMetatileAttributes_BattleFrontierOutsideEast
	.4byte InitTilesetAnim_BattleFrontierOutsideEast

	.align 2
gTileset_Building:: @ 83DF884
	.byte TRUE @ is compressed
	.byte FALSE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_InsideBuilding
	.4byte gTilesetPalettes_InsideBuilding
	.4byte gMetatiles_InsideBuilding
	.4byte gMetatileAttributes_InsideBuilding
	.4byte InitTilesetAnim_Building

	.align 2
gTileset_Shop:: @ 83DF89C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Shop
	.4byte gTilesetPalettes_Shop
	.4byte gMetatiles_Shop
	.4byte gMetatileAttributes_Shop
	.4byte NULL @ animation callback

	.align 2
gTileset_PokemonCenter:: @ 83DF8B4
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_PokemonCenter
	.4byte gTilesetPalettes_PokemonCenter
	.4byte gMetatiles_PokemonCenter
	.4byte gMetatileAttributes_PokemonCenter
	.4byte NULL @ animation callback

	.align 2
gTileset_Cave:: @ 83DF8CC
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Cave
	.4byte gTilesetPalettes_Cave
	.4byte gMetatiles_Cave
	.4byte gMetatileAttributes_Cave
	.4byte InitTilesetAnim_Cave

	.align 2
gTileset_PokemonSchool:: @ 83DF8E4
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_PokemonSchool
	.4byte gTilesetPalettes_PokemonSchool
	.4byte gMetatiles_PokemonSchool
	.4byte gMetatileAttributes_PokemonSchool
	.4byte NULL @ animation callback

	.align 2
gTileset_PokemonFanClub:: @ 83DF8FC
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_PokemonFanClub
	.4byte gTilesetPalettes_PokemonFanClub
	.4byte gMetatiles_PokemonFanClub
	.4byte gMetatileAttributes_PokemonFanClub
	.4byte NULL @ animation callback

	.align 2
gTileset_Unused1:: @ 83DF914
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Unused1
	.4byte gTilesetPalettes_Unused1
	.4byte gMetatiles_Unused1
	.4byte gMetatileAttributes_Unused1
	.4byte NULL @ animation callback

	.align 2
gTileset_MeteorFalls:: @ 83DF92C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_MeteorFalls
	.4byte gTilesetPalettes_MeteorFalls
	.4byte gMetatiles_MeteorFalls
	.4byte gMetatileAttributes_MeteorFalls
	.4byte NULL @ animation callback

	.align 2
gTileset_OceanicMuseum:: @ 83DF944
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_OceanicMuseum
	.4byte gTilesetPalettes_OceanicMuseum
	.4byte gMetatiles_OceanicMuseum
	.4byte gMetatileAttributes_OceanicMuseum
	.4byte NULL @ animation callback

	.align 2
gTileset_CableClub:: @ 83DF95C
	.byte FALSE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_CableClub
	.4byte gTilesetPalettes_CableClub
	.4byte gMetatiles_CableClub
	.4byte gMetatileAttributes_CableClub
	.4byte NULL @ animation callback

	.align 2
gTileset_SeashoreHouse:: @ 83DF974
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_SeashoreHouse
	.4byte gTilesetPalettes_SeashoreHouse
	.4byte gMetatiles_SeashoreHouse
	.4byte gMetatileAttributes_SeashoreHouse
	.4byte NULL @ animation callback

	.align 2
gTileset_PrettyPetalFlowerShop:: @ 83DF98C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_PrettyPetalFlowerShop
	.4byte gTilesetPalettes_PrettyPetalFlowerShop
	.4byte gMetatiles_PrettyPetalFlowerShop
	.4byte gMetatileAttributes_PrettyPetalFlowerShop
	.4byte NULL @ animation callback

	.align 2
gTileset_PokemonDayCare:: @ 83DF9A4
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_PokemonDayCare
	.4byte gTilesetPalettes_PokemonDayCare
	.4byte gMetatiles_PokemonDayCare
	.4byte gMetatileAttributes_PokemonDayCare
	.4byte NULL @ animation callback

	.align 2
gTileset_Facility:: @ 83DF9BC
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Facility
	.4byte gTilesetPalettes_Facility
	.4byte gMetatiles_Facility
	.4byte gMetatileAttributes_Facility
	.4byte NULL @ animation callback

	.align 2
gTileset_BikeShop:: @ 83DF9D4
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_BikeShop
	.4byte gTilesetPalettes_BikeShop
	.4byte gMetatiles_BikeShop
	.4byte gMetatileAttributes_BikeShop
	.4byte InitTilesetAnim_BikeShop

	.align 2
gTileset_RusturfTunnel:: @ 83DF9EC
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_RusturfTunnel
	.4byte gTilesetPalettes_RusturfTunnel
	.4byte gMetatiles_RusturfTunnel
	.4byte gMetatileAttributes_RusturfTunnel
	.4byte NULL @ animation callback

	.align 2
gTileset_SecretBaseBrownCave:: @ 83DFA04
	.byte FALSE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_SecretBaseBrownCave
	.4byte gTilesetPalettes_SecretBaseBrownCave
	.4byte gMetatiles_SecretBaseSecondary
	.4byte gMetatileAttributes_SecretBaseSecondary
	.4byte NULL @ animation callback

	.align 2
gTileset_SecretBaseTree:: @ 83DFA1C
	.byte FALSE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_SecretBaseTree
	.4byte gTilesetPalettes_SecretBaseTree
	.4byte gMetatiles_SecretBaseSecondary
	.4byte gMetatileAttributes_SecretBaseSecondary
	.4byte NULL @ animation callback

	.align 2
gTileset_SecretBaseShrub:: @ 83DFA34
	.byte FALSE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_SecretBaseShrub
	.4byte gTilesetPalettes_SecretBaseShrub
	.4byte gMetatiles_SecretBaseSecondary
	.4byte gMetatileAttributes_SecretBaseSecondary
	.4byte NULL @ animation callback

	.align 2
gTileset_SecretBaseBlueCave:: @ 83DFA4C
	.byte FALSE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_SecretBaseBlueCave
	.4byte gTilesetPalettes_SecretBaseBlueCave
	.4byte gMetatiles_SecretBaseSecondary
	.4byte gMetatileAttributes_SecretBaseSecondary
	.4byte NULL @ animation callback

	.align 2
gTileset_SecretBaseYellowCave:: @ 83DFA64
	.byte FALSE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_SecretBaseYellowCave
	.4byte gTilesetPalettes_SecretBaseYellowCave
	.4byte gMetatiles_SecretBaseSecondary
	.4byte gMetatileAttributes_SecretBaseSecondary
	.4byte NULL @ animation callback

	.align 2
gTileset_SecretBaseRedCave:: @ 83DFA7C
	.byte FALSE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_SecretBaseRedCave
	.4byte gTilesetPalettes_SecretBaseRedCave
	.4byte gMetatiles_SecretBaseSecondary
	.4byte gMetatileAttributes_SecretBaseSecondary
	.4byte NULL @ animation callback

	.align 2
gTileset_InsideOfTruck:: @ 83DFA94
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_InsideOfTruck
	.4byte gTilesetPalettes_InsideOfTruck
	.4byte gMetatiles_InsideOfTruck
	.4byte gMetatileAttributes_InsideOfTruck
	.4byte NULL @ animation callback

	.align 2
gTileset_Unused2:: @ 83DFAAC
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Unused2
	.4byte gTilesetPalettes_Unused2
	.4byte gMetatiles_Unused2
	.4byte gMetatileAttributes_Unused2
	.4byte NULL @ animation callback

	.align 2
gTileset_Contest:: @ 83DFAC4
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Contest
	.4byte gTilesetPalettes_Contest
	.4byte gMetatiles_Contest
	.4byte gMetatileAttributes_Contest
	.4byte NULL @ animation callback

	.align 2
gTileset_LilycoveMuseum:: @ 83DFADC
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_LilycoveMuseum
	.4byte gTilesetPalettes_LilycoveMuseum
	.4byte gMetatiles_LilycoveMuseum
	.4byte gMetatileAttributes_LilycoveMuseum
	.4byte NULL @ animation callback

	.align 2
gTileset_BrendansMaysHouse:: @ 83DFAF4
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_BrendansMaysHouse
	.4byte gTilesetPalettes_BrendansMaysHouse
	.4byte gMetatiles_BrendansMaysHouse
	.4byte gMetatileAttributes_BrendansMaysHouse
	.4byte NULL @ animation callback

	.align 2
gTileset_Lab:: @ 83DFB0C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Lab
	.4byte gTilesetPalettes_Lab
	.4byte gMetatiles_Lab
	.4byte gMetatileAttributes_Lab
	.4byte NULL @ animation callback

	.align 2
gTileset_Underwater:: @ 83DFB24
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_Underwater
	.4byte gTilesetPalettes_Underwater
	.4byte gMetatiles_Underwater
	.4byte gMetatileAttributes_Underwater
	.4byte InitTilesetAnim_Underwater

	.align 2
gTileset_PetalburgGym:: @ 83DFB3C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_PetalburgGym
	.4byte gTilesetPalettes_PetalburgGym
	.4byte gMetatiles_PetalburgGym
	.4byte gMetatileAttributes_PetalburgGym
	.4byte NULL @ animation callback

	.align 2
gTileset_SootopolisGym:: @ 83DFB54
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_SootopolisGym
	.4byte gTilesetPalettes_SootopolisGym
	.4byte gMetatiles_SootopolisGym
	.4byte gMetatileAttributes_SootopolisGym
	.4byte InitTilesetAnim_SootopolisGym

	.align 2
gTileset_GenericBuilding:: @ 83DFB6C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_GenericBuilding
	.4byte gTilesetPalettes_GenericBuilding
	.4byte gMetatiles_GenericBuilding
	.4byte gMetatileAttributes_GenericBuilding
	.4byte NULL @ animation callback

	.align 2
gTileset_MauvilleGameCorner:: @ 83DFB84
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_MauvilleGameCorner
	.4byte gTilesetPalettes_MauvilleGameCorner
	.4byte gMetatiles_MauvilleGameCorner
	.4byte gMetatileAttributes_MauvilleGameCorner
	.4byte NULL @ animation callback

	.align 2
gTileset_RustboroGym:: @ 83DFB9C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_RustboroGym
	.4byte gTilesetPalettes_RustboroGym
	.4byte gMetatiles_RustboroGym
	.4byte gMetatileAttributes_RustboroGym
	.4byte NULL @ animation callback

	.align 2
gTileset_DewfordGym:: @ 83DFBB4
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_DewfordGym
	.4byte gTilesetPalettes_DewfordGym
	.4byte gMetatiles_DewfordGym
	.4byte gMetatileAttributes_DewfordGym
	.4byte NULL @ animation callback

	.align 2
gTileset_MauvilleGym:: @ 83DFBCC
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_MauvilleGym
	.4byte gTilesetPalettes_MauvilleGym
	.4byte gMetatiles_MauvilleGym
	.4byte gMetatileAttributes_MauvilleGym
	.4byte InitTilesetAnim_MauvilleGym

	.align 2
gTileset_LavaridgeGym:: @ 83DFBE4
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_LavaridgeGym
	.4byte gTilesetPalettes_LavaridgeGym
	.4byte gMetatiles_LavaridgeGym
	.4byte gMetatileAttributes_LavaridgeGym
	.4byte NULL @ animation callback

	.align 2
gTileset_TrickHousePuzzle:: @ 83DFBFC
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_TrickHousePuzzle
	.4byte gTilesetPalettes_TrickHousePuzzle
	.4byte gMetatiles_TrickHousePuzzle
	.4byte gMetatileAttributes_TrickHousePuzzle
	.4byte NULL @ animation callback

	.align 2
gTileset_FortreeGym:: @ 83DFC14
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_FortreeGym
	.4byte gTilesetPalettes_FortreeGym
	.4byte gMetatiles_FortreeGym
	.4byte gMetatileAttributes_FortreeGym
	.4byte NULL @ animation callback

	.align 2
gTileset_MossdeepGym:: @ 83DFC2C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_MossdeepGym
	.4byte gTilesetPalettes_MossdeepGym
	.4byte gMetatiles_MossdeepGym
	.4byte gMetatileAttributes_MossdeepGym
	.4byte NULL @ animation callback

	.align 2
gTileset_InsideShip:: @ 83DFC44
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_InsideShip
	.4byte gTilesetPalettes_InsideShip
	.4byte gMetatiles_InsideShip
	.4byte gMetatileAttributes_InsideShip
	.4byte NULL @ animation callback

	.align 2
gTileset_SecretBase:: @ 83DFC5C
	.byte FALSE @ is compressed
	.byte FALSE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_SecretBase
	.4byte gTilesetPalettes_SecretBase
	.4byte gMetatiles_SecretBasePrimary
	.4byte gMetatileAttributes_SecretBasePrimary
	.4byte NULL @ animation callback

	.align 2
gTilesetPointer_SecretBase:: @ 83DFC74
	.4byte gTileset_SecretBase

	.align 2
gTilesetPointer_SecretBaseRedCave:: @ 83DFC78
	.4byte gTileset_SecretBaseRedCave

	.align 2
gTileset_EliteFour:: @ 83DFC7C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_EliteFour
	.4byte gTilesetPalettes_EliteFour
	.4byte gMetatiles_EliteFour
	.4byte gMetatileAttributes_EliteFour
	.4byte InitTilesetAnim_EliteFour

	.align 2
gTileset_BattleFrontier:: @ 83DFC94
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_BattleFrontier
	.4byte gTilesetPalettes_BattleFrontier
	.4byte gMetatiles_BattleFrontier
	.4byte gMetatileAttributes_BattleFrontier
	.4byte NULL @ animation callback

	.align 2
gTileset_BattlePalace:: @ 83DFCAC
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_BattlePalace
	.4byte gTilesetPalettes_BattlePalace
	.4byte gMetatiles_BattlePalace
	.4byte gMetatileAttributes_BattlePalace
	.4byte NULL @ animation callback

	.align 2
gTileset_BattleDome:: @ 83DFCC4
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_BattleDome
	.4byte gTilesetPalettes_BattleDome
	.4byte gMetatiles_BattleDome
	.4byte gMetatileAttributes_BattleDome
	.4byte InitTilesetAnim_BattleDome

	.align 2
gTileset_BattleFactory:: @ 83DFCDC
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_BattleFactory
	.4byte gTilesetPalettes_BattleFactory
	.4byte gMetatiles_BattleFactory
	.4byte gMetatileAttributes_BattleFactory
	.4byte NULL @ animation callback

	.align 2
gTileset_BattlePike:: @ 83DFCF4
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_BattlePike
	.4byte gTilesetPalettes_BattlePike
	.4byte gMetatiles_BattlePike
	.4byte gMetatileAttributes_BattlePike
	.4byte NULL @ animation callback

	.align 2
gTileset_BattleArena:: @ 83DFD0C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_BattleArena
	.4byte gTilesetPalettes_BattleArena
	.4byte gMetatiles_BattleArena
	.4byte gMetatileAttributes_BattleArena
	.4byte NULL @ animation callback

	.align 2
gTileset_BattlePyramid:: @ 83DFD24
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_BattlePyramid
	.4byte gTilesetPalettes_BattlePyramid
	.4byte gMetatiles_BattlePyramid
	.4byte gMetatileAttributes_BattlePyramid
	.4byte InitTilesetAnim_BattlePyramid

	.align 2
gTileset_MirageTower:: @ 83DFD3C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_MirageTower
	.4byte gTilesetPalettes_MirageTower
	.4byte gMetatiles_MirageTower
	.4byte gMetatileAttributes_MirageTower
	.4byte NULL @ animation callback

	.align 2
gTileset_MossdeepGameCorner:: @ 83DFD54
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_MossdeepGameCorner
	.4byte gTilesetPalettes_MossdeepGameCorner
	.4byte gMetatiles_MossdeepGameCorner
	.4byte gMetatileAttributes_MossdeepGameCorner
	.4byte NULL @ animation callback

	.align 2
gTileset_IslandHarbor:: @ 83DFD6C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_IslandHarbor
	.4byte gTilesetPalettes_IslandHarbor
	.4byte gMetatiles_IslandHarbor
	.4byte gMetatileAttributes_IslandHarbor
	.4byte NULL @ animation callback

	.align 2
gTileset_TrainerHill:: @ 83DFD84
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_TrainerHill
	.4byte gTilesetPalettes_TrainerHill
	.4byte gMetatiles_TrainerHill
	.4byte gMetatileAttributes_TrainerHill
	.4byte NULL @ animation callback

	.align 2
gTileset_NavelRock:: @ 83DFD9C
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_NavelRock
	.4byte gTilesetPalettes_NavelRock
	.4byte gMetatiles_NavelRock
	.4byte gMetatileAttributes_NavelRock
	.4byte NULL @ animation callback

	.align 2
gTileset_BattleFrontierRankingHall:: @ 83DFDB4
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_BattleFrontierRankingHall
	.4byte gTilesetPalettes_BattleFrontierRankingHall
	.4byte gMetatiles_BattleFrontierRankingHall
	.4byte gMetatileAttributes_BattleFrontierRankingHall
	.4byte NULL @ animation callback

	.align 2
gTileset_BattleTent:: @ 83DFDCC
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_BattleTent
	.4byte gTilesetPalettes_BattleTent
	.4byte gMetatiles_BattleTent
	.4byte gMetatileAttributes_BattleTent
	.4byte NULL @ animation callback

	.align 2
gTileset_MysteryEventsHouse:: @ 83DFDE4
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_MysteryEventsHouse
	.4byte gTilesetPalettes_MysteryEventsHouse
	.4byte gMetatiles_MysteryEventsHouse
	.4byte gMetatileAttributes_MysteryEventsHouse
	.4byte NULL @ animation callback

	.align 2
gTileset_UnionRoom:: @ 83DFDFC
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary tileset
	.2byte 0 @ padding
	.4byte gTilesetTiles_UnionRoom
	.4byte gTilesetPalettes_UnionRoom
	.4byte gMetatiles_UnionRoom
	.4byte gMetatileAttributes_UnionRoom
	.4byte NULL @ animation callback

	.align 2
gTileset_GenericBuildingKanto::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_GenericBuildingKanto
	.4byte gTilesetPalettes_GenericBuildingKanto
	.4byte gMetatiles_GenericBuildingKanto
	.4byte gMetatileAttributes_GenericBuildingKanto
	.4byte NULL

	.align 2
gTileset_GateKanto::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_GateKanto
	.4byte gTilesetPalettes_GateKanto
	.4byte gMetatiles_GateKanto
	.4byte gMetatileAttributes_GateKanto
	.4byte NULL
	
	.align 2
gTileset_LabKanto::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_LabKanto
	.4byte gTilesetPalettes_LabKanto
	.4byte gMetatiles_LabKanto
	.4byte gMetatileAttributes_LabKanto
	.4byte NULL

	.align 2
gTileset_ViridianGym::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_ViridianGym
	.4byte gTilesetPalettes_ViridianGym
	.4byte gMetatiles_ViridianGym
	.4byte gMetatileAttributes_ViridianGym
	.4byte NULL

	.align 2
gTileset_TrainersSchoolKanto::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_TrainersSchoolKanto
	.4byte gTilesetPalettes_TrainersSchoolKanto
	.4byte gMetatiles_TrainersSchoolKanto
	.4byte gMetatileAttributes_TrainersSchoolKanto
	.4byte NULL

	.align 2
gTileset_ShopKanto::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_ShopKanto
	.4byte gTilesetPalettes_ShopKanto
	.4byte gMetatiles_ShopKanto
	.4byte gMetatileAttributes_ShopKanto
	.4byte NULL

	.align 2
gTileset_PokemonCenterKanto::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_PokemonCenterKanto
	.4byte gTilesetPalettes_PokemonCenterKanto
	.4byte gMetatiles_PokemonCenterKanto
	.4byte gMetatileAttributes_PokemonCenterKanto
	.4byte NULL

	.align 2
gTileset_PewterMuseum::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_PewterMuseum
	.4byte gTilesetPalettes_PewterMuseum
	.4byte gMetatiles_PewterMuseum
	.4byte gMetatileAttributes_PewterMuseum
	.4byte NULL

	.align 2
gTileset_PewterGym::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_PewterGym
	.4byte gTilesetPalettes_PewterGym
	.4byte gMetatiles_PewterGym
	.4byte gMetatileAttributes_PewterGym
	.4byte NULL

	.align 2
gTileset_RobbedHouse::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_RobbedHouse
	.4byte gTilesetPalettes_RobbedHouse
	.4byte gMetatiles_RobbedHouse
	.4byte gMetatileAttributes_RobbedHouse
	.4byte NULL

	.align 2
gTileset_CeruleanGym::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_CeruleanGym
	.4byte gTilesetPalettes_CeruleanGym
	.4byte gMetatiles_CeruleanGym
	.4byte gMetatileAttributes_CeruleanGym
	.4byte NULL

	.align 2
gTileset_BikeShopKanto::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_BikeShopKanto
	.4byte gTilesetPalettes_BikeShopKanto
	.4byte gMetatiles_BikeShopKanto
	.4byte gMetatileAttributes_BikeShopKanto
	.4byte NULL

	.align 2
gTileset_PokemonDayCareKanto::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_PokemonDayCareKanto
	.4byte gTilesetPalettes_PokemonDayCareKanto
	.4byte gMetatiles_PokemonDayCareKanto
	.4byte gMetatileAttributes_PokemonDayCareKanto
	.4byte NULL

	.align 2
gTileset_VermilionGym::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_VermilionGym
	.4byte gTilesetPalettes_VermilionGym
	.4byte gMetatiles_VermilionGym
	.4byte gMetatileAttributes_VermilionGym
	.4byte sub_807031C

	.align 2
gTileset_DepartmentStoreKanto::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_DepartmentStoreKanto
	.4byte gTilesetPalettes_DepartmentStoreKanto
	.4byte gMetatiles_DepartmentStoreKanto
	.4byte gMetatileAttributes_DepartmentStoreKanto
	.4byte NULL

	.align 2
gTileset_RocketHideout::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_CeladonCondominiums
	.4byte gTilesetPalettes_CeladonCondominiums
	.4byte gMetatiles_RocketHideout
	.4byte gMetatileAttributes_RocketHideout
	.4byte sub_8070250

	.align 2
gTileset_CeladonCondominiums::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_CeladonCondominiums
	.4byte gTilesetPalettes_CeladonCondominiums
	.4byte gMetatiles_CeladonCondominiums
	.4byte gMetatileAttributes_CeladonCondominiums
	.4byte NULL

	.align 2
gTileset_GameCornerKanto::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_GameCornerKanto
	.4byte gTilesetPalettes_GameCornerKanto
	.4byte gMetatiles_GameCornerKanto
	.4byte gMetatileAttributes_GameCornerKanto
	.4byte NULL

	.align 2
gTileset_CeladonGym::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_CeladonGym
	.4byte gTilesetPalettes_CeladonGym
	.4byte gMetatiles_CeladonGym
	.4byte gMetatileAttributes_CeladonGym
	.4byte sub_8070380

	.align 2
gTileset_CeladonHotel::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_CeladonHotel
	.4byte gTilesetPalettes_CeladonHotel
	.4byte gMetatiles_CeladonHotel
	.4byte gMetatileAttributes_CeladonHotel
	.4byte NULL

	.align 2
gTileset_SafariZoneBuildingKanto::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_SafariZoneBuildingKanto
	.4byte gTilesetPalettes_SafariZoneBuildingKanto
	.4byte gMetatiles_SafariZoneBuildingKanto
	.4byte gMetatileAttributes_SafariZoneBuildingKanto
	.4byte NULL

	.align 2
gTileset_FuchsiaGym::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_FuchsiaGym
	.4byte gTilesetPalettes_FuchsiaGym
	.4byte gMetatiles_FuchsiaGym
	.4byte gMetatileAttributes_FuchsiaGym
	.4byte NULL

	.align 2
gTileset_SaffronGym::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_SaffronGym
	.4byte gTilesetPalettes_SaffronGym
	.4byte gMetatiles_SaffronGym
	.4byte gMetatileAttributes_SaffronGym
	.4byte NULL

	.align 2
gTileset_CinnabarGym::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_CinnabarGym
	.4byte gTilesetPalettes_CinnabarGym
	.4byte gMetatiles_CinnabarGym
	.4byte gMetatileAttributes_CinnabarGym
	.4byte NULL

	.align 2
gTileset_SeaCottage::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_SeaCottage
	.4byte gTilesetPalettes_SeaCottage
	.4byte gMetatiles_SeaCottage
	.4byte gMetatileAttributes_SeaCottage
	.4byte NULL

	.align 2
gTileset_ViridianForest::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_ViridianForest
	.4byte gTilesetPalettes_ViridianForest
	.4byte gMetatiles_ViridianForest
	.4byte gMetatileAttributes_ViridianForest
	.4byte NULL

	.align 2
gTileset_CaveKanto::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_CaveKanto
	.4byte gTilesetPalettes_CaveKanto
	.4byte gMetatiles_CaveKanto
	.4byte gMetatileAttributes_CaveKanto
	.4byte NULL

	.align 2
gTileset_UndergroundPath::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_UndergroundPath
	.4byte gTilesetPalettes_UndergroundPath
	.4byte gMetatiles_UndergroundPath
	.4byte gMetatileAttributes_UndergroundPath
	.4byte NULL

	.align 2
gTileset_InsideShipKanto::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_InsideShipKanto
	.4byte gTilesetPalettes_InsideShipKanto
	.4byte gMetatiles_InsideShipKanto
	.4byte gMetatileAttributes_InsideShipKanto
	.4byte NULL

	.align 2
gTileset_DiglettsCave::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_DiglettsCave
	.4byte gTilesetPalettes_DiglettsCave
	.4byte gMetatiles_DiglettsCave
	.4byte gMetatileAttributes_DiglettsCave
	.4byte NULL

	.align 2
gTileset_RockTunnel::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_RockTunnel
	.4byte gTilesetPalettes_RockTunnel
	.4byte gMetatiles_RockTunnel
	.4byte gMetatileAttributes_RockTunnel
	.4byte NULL

	.align 2
gTileset_PokemonTower::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_PokemonTower
	.4byte gTilesetPalettes_PokemonTower
	.4byte gMetatiles_PokemonTower
	.4byte gMetatileAttributes_PokemonTower
	.4byte NULL

	.align 2
gTileset_PowerPlant::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_PowerPlant
	.4byte gTilesetPalettes_PowerPlant
	.4byte gMetatiles_PowerPlant
	.4byte gMetatileAttributes_PowerPlant
	.4byte NULL

	.align 2
gTileset_SeafoamIslands::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_SeafoamIslands
	.4byte gTilesetPalettes_SeafoamIslands
	.4byte gMetatiles_SeafoamIslands
	.4byte gMetatileAttributes_SeafoamIslands
	.4byte NULL

	.align 2
gTileset_PokemonMansion::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_PokemonMansion
	.4byte gTilesetPalettes_PokemonMansion
	.4byte gMetatiles_PokemonMansion
	.4byte gMetatileAttributes_PokemonMansion
	.4byte NULL

	.align 2
gTileset_EliteFourKanto::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_EliteFourKanto
	.4byte gTilesetPalettes_EliteFourKanto
	.4byte gMetatiles_EliteFourKanto
	.4byte gMetatileAttributes_EliteFourKanto
	.4byte NULL

	.align 2
gTileset_HallOfFameKanto::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_HallOfFameKanto
	.4byte gTilesetPalettes_HallOfFameKanto
	.4byte gMetatiles_HallOfFameKanto
	.4byte gMetatileAttributes_HallOfFameKanto
	.4byte NULL

	.align 2
gTileset_CeruleanCave::
	.byte TRUE @ is compressed
	.byte TRUE @ is secondary
	.2byte 0 @ padding
	.4byte gTilesetTiles_CeruleanCave
	.4byte gTilesetPalettes_CeruleanCave
	.4byte gMetatiles_CeruleanCave
	.4byte gMetatileAttributes_CeruleanCave
	.4byte NULL