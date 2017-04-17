/*Turn APEX Buildings on by removing the "//" at the beginning of the line.
But be careful! People who don't have the APEX DLC can not see the Buildings! They can walk through them!!!!*/

//#define USE_APEX_Buildings 1

#ifdef USE_APEX_Buildings

class BarrierbunkergreenBig: Exile_AbstractCraftingRecipe//V0.2.8
{
	name = "Barrierbunker Green Big APEX";
	pictureItem = "Land_HBarrier_01_big_tower_green_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_HBarrier_01_big_tower_green_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{3, "Exile_Item_Sand"},
		{5, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_Woodlog"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
		"Exile_Item_Pliers"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class BagbunkergreenBig: Exile_AbstractCraftingRecipe//V0.2.8
{
	name = "Bagbunker Green Big APEX";
	pictureItem = "Land_Bagbunker_01_large_green_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_Bagbunker_01_large_green_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{3, "Exile_Item_Sand"},
		{5, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_Rope"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
		"Exile_Item_Pliers"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};


class SandbagshortGreen: Exile_AbstractCraftingRecipe//V0.2.8
{
	name = "Sandbagshort Green APEX";
	pictureItem = "Land_Bagfence_01_short_green_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_Bagfence_01_short_green_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Sand"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class SandbaglongGreen: Exile_AbstractCraftingRecipe//V0.2.8
{
	name = "Sandbaglong Green APEX";
	pictureItem = "Land_Bagfence_01_long_green_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_Bagfence_01_long_green_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_Sand"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};
/*
class Petroglyphwall02: Exile_AbstractCraftingRecipe//V0.2.8
{
	name = "Petroglyphwall02 APEX";
	pictureItem = "Land_PetroglyphWall_02_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_PetroglyphWall_02_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class Petroglyphwall01: Exile_AbstractCraftingRecipe//V0.2.8
{
	name = "Petroglyphwall01 APEX";
	pictureItem = "Land_PetroglyphWall_01_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_PetroglyphWall_01_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};
*/
class IRtent02: Exile_AbstractCraftingRecipe//V0.2.8
{
	name = "IR Tent 02 APEX";
	pictureItem = "Land_IRMaskingCover_02_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_IRMaskingCover_02_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{3, "Exile_Item_JunkMetal"},
		{3, "Exile_Item_Rope"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class IRtent01: Exile_AbstractCraftingRecipe//V0.2.8
{
	name = "IR Tent 01 APEX";
	pictureItem = "Land_IRMaskingCover_01_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_IRMaskingCover_01_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{3, "Exile_Item_JunkMetal"},
		{3, "Exile_Item_Rope"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};
/*
class Breakwater02: Exile_AbstractCraftingRecipe//V0.2.8
{
	name = "Breakwater02 APEX";
	pictureItem = "Land_Breakwater_02_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_Breakwater_02_F_Kit"},
		{2,"Exile_Item_WaterCanisterEmpty"},
		{2,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{2, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class Breakwater01: Exile_AbstractCraftingRecipe//V0.2.8
{
	name = "Breakwater01 APEX";
	pictureItem = "Land_Breakwater_01_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_Breakwater_01_F_Kit"},
		{2,"Exile_Item_WaterCanisterEmpty"},
		{2,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{2, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class BasaltwallGate: Exile_AbstractCraftingRecipe//V0.2.8
{
	name = "Basaltwall Gate APEX";
	pictureItem = "Land_BasaltWall_01_gate_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_BasaltWall_01_gate_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class Basaltwall8m: Exile_AbstractCraftingRecipe//V0.2.8
{
	name = "Basaltwall 8m APEX";
	pictureItem = "Land_BasaltWall_01_8m_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_BasaltWall_01_8m_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class Basaltwall4m: Exile_AbstractCraftingRecipe//V0.2.8
{
	name = "Basaltwall 4m APEX";
	pictureItem = "Land_BasaltWall_01_4m_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_BasaltWall_01_4m_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};
*/
class Airport01hangarAPEX: Exile_AbstractCraftingRecipe //V0.2.8
{
	name = "Airport Hangar APEX";
	pictureItem = "Land_Airport_01_hangar_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_Airport_01_hangar_F_Kit"},
	};
	requiresFire = 1;
	components[] = 
	{
		{3, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Hammer"
	};
	category = "Buildings";
};
/*
class GarageShelterAPEX: Exile_AbstractCraftingRecipe //V0.2.7
{
	name = "Garage Shelter APEX";
	pictureItem = "Land_GarageShelter_01_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_GarageShelter_01_F_Kit"},
	};
	requiresFire = 1;
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{4, "Exile_Item_Woodlog"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Hammer"
	};
	category = "Buildings";
};

class BigBunkerAPEX: Exile_AbstractCraftingRecipe
{
	name = "Big Bunker APEX";
	pictureItem = "Land_PillboxBunker_01_big_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_PillboxBunker_01_big_F_Kit"},
		{2,"Exile_Item_WaterCanisterEmpty"},
		{2,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{5, "Exile_Item_Cement"},
		{5, "Exile_Item_Sand"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{2, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};
class BigBunkerRectangleAPEX: Exile_AbstractCraftingRecipe
{
	name = "Big Bunker Rectangle APEX";
	pictureItem = "Land_PillboxBunker_01_rectangle_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_PillboxBunker_01_rectangle_F_Kit"},
		{2,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};
class BigBunkerHexAPEX: Exile_AbstractCraftingRecipe
{
	name = "Big Bunker Hexagonal APEX";
	pictureItem = "Land_PillboxBunker_01_hex_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_PillboxBunker_01_hex_F_Kit"},
		{2,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};
class Bunkerwall3mAPEX: Exile_AbstractCraftingRecipe
{
	name = "Bunkerwall 3m APEX";
	pictureItem = "Land_PillboxWall_01_3m_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_PillboxWall_01_3m_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};
class Bunkerwall6mAPEX: Exile_AbstractCraftingRecipe
{
	name = "Bunkerwall 6m APEX";
	pictureItem = "Land_PillboxWall_01_6m_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_PillboxWall_01_6m_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};
class AirportControltowerAPEX: Exile_AbstractCraftingRecipe
{
	name = "Airport Controltower APEX";
	pictureItem = "Land_Airport_01_controlTower_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_Airport_01_controlTower_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	requiresConcreteMixer = 0;
	category = "Buildings";
};
*/
class Barrier3greenAPEX: Exile_AbstractCraftingRecipe
{
	name = "Barrier3 green APEX";
	pictureItem = "Land_HBarrier_01_line_3_green_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_HBarrier_01_line_3_green_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	requiresConcreteMixer = 0;
	category = "Walls";
};
class Barrier5greenAPEX: Exile_AbstractCraftingRecipe
{
	name = "Barrier5 green APEX";
	pictureItem = "Land_HBarrier_01_line_5_green_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_HBarrier_01_line_5_green_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_MetalWire"}
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	requiresConcreteMixer = 0;
	category = "Walls";
};
class SandbagtowerGreenAPEX: Exile_AbstractCraftingRecipe
{
	name = "Sandbagtower green APEX";
	pictureItem = "Land_HBarrier_01_big_tower_green_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_HBarrier_01_big_tower_green_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Grinder"
	};
	requiresConcreteMixer = 0;
	category = "Buildings";
};
/*
class TrenchForestAPEX: Exile_AbstractCraftingRecipe
{
	name = "Trench Forest APEX";
	pictureItem = "Land_trench_01_forest_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_trench_01_forest_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_Woodlog"},
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 0;
	category = "Buildings";
};
class TrenchGrassAPEX: Exile_AbstractCraftingRecipe
{
	name = "Trench Grass APEX";
	pictureItem = "Land_trench_01_grass_F_Kit";
	returnedItems[] = 
	{
		{1,"Land_trench_01_grass_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{4, "Exile_Item_Sand"},
		{4, "Exile_Item_Woodlog"},
		{4, "Exile_Item_WoodPlank"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 0;
	category = "Buildings";
};
*/
#endif

class HuronAmmo: Exile_AbstractCraftingRecipe
{
	name = "HuronAmmo";
	pictureItem = "B_Slingload_01_Ammo_F_Kit";
	returnedItems[] = 
	{
		{1, "B_Slingload_01_Ammo_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{3, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{5, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_StorageCrateKit"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Container";
};

class HuronFuel: Exile_AbstractCraftingRecipe
{
	name = "HuronFuel";
	pictureItem = "B_Slingload_01_fuel_F_Kit";
	returnedItems[] = 
	{
		{1, "B_Slingload_01_fuel_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{3, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_MetalScrews"},
		{5, "Exile_Item_FuelCanisterFull"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Container";
};

class Suitcase: Exile_AbstractCraftingRecipe
{
	name = "Suitcase";
	pictureItem = "Land_Suitcase_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Suitcase_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Container";
};

class AmmoBoxsmall: Exile_AbstractCraftingRecipe
{
	name = "Ammo Box";
	pictureItem = "Land_Ammobox_rounds_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Ammobox_rounds_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_DuctTape"},
	};
	category = "Container";
};


class ResearchSmall: Exile_AbstractCraftingRecipe
{
	name = "Research Small";
	pictureItem = "Land_Research_house_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Research_house_V1_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_DuctTape"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "Buildings";
};

class ResearchBig: Exile_AbstractCraftingRecipe
{
	name = "Research Big";
	pictureItem = "Land_Research_HQ_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Research_HQ_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{4, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_DuctTape"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "Buildings";
};

class PlasticCase: Exile_AbstractCraftingRecipe
{
	name = "Plastic Case";
	pictureItem = "Land_PlasticCase_01_medium_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_PlasticCase_01_medium_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{3, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_DuctTape"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "Container";
};

class HouseBig: Exile_AbstractCraftingRecipe
{
	name = "House Big";
	pictureItem = "Land_i_House_Big_01_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_i_House_Big_01_V2_F_Kit"},
		{2,"Exile_Item_WaterCanisterEmpty"},
		{2,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_WaterCanisterDirtyWater"},
		{2, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};

class Bungalow: Exile_AbstractCraftingRecipe
{
	name = "Bungalow";
	pictureItem = "Land_i_House_Small_03_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_i_House_Small_03_V1_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};

class ATM: Exile_AbstractCraftingRecipe
{
	name = "ATM";
	pictureItem = "Land_Atm_02_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Atm_02_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"},
		{3, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalWire"},
		{4, "Exile_Item_Rope"},
		{2, "Exile_Item_DuctTape"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "Misc";
};

class ConcreteMixer: Exile_AbstractCraftingRecipe
{
	name = "Concrete Mixer";
	pictureItem = "Exile_ConcreteMixer_Kit";
	returnedItems[] = 
	{
		{1, "Exile_ConcreteMixer_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_PortableGeneratorKit"},
		{3, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_MetalWire"},
		{2, "Exile_Item_DuctTape"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "Misc";
};

class FlagCSAT: Exile_AbstractCraftingRecipe
{
	name = "Flag CSAT";
	pictureItem = "Flag_CSAT_F_Kit";
	returnedItems[] = 
	{
		{1, "Flag_CSAT_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_DuctTape"},
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	category = "Signs";
};

class GarbageContainer: Exile_AbstractCraftingRecipe
{
	name = "Garbage Container";
	pictureItem = "Land_GarbageContainer_closed_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_GarbageContainer_closed_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Misc";
};

class MetalRack4Layers: Exile_AbstractCraftingRecipe
{
	name = "Metal Rack 4 Layers";
	pictureItem = "Land_Metal_rack_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Metal_rack_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
		{4, "Exile_Item_JunkMetal"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Misc";
};

class WaterSink: Exile_AbstractCraftingRecipe
{
	name = "Water Sink";
	pictureItem = "Land_Sink_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sink_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Misc";
};

class PavementWideCorner: Exile_AbstractCraftingRecipe
{
	name = "Pavement Wide Corner";
	pictureItem = "Land_Pavement_wide_corner_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pavement_wide_corner_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Misc";
};

class PavementWide: Exile_AbstractCraftingRecipe
{
	name = "Pavement Wide";
	pictureItem = "Land_Pavement_wide_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pavement_wide_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Misc";
};

class PavementNarrowCorner: Exile_AbstractCraftingRecipe
{
	name = "Pavement Narrow Corner";
	pictureItem = "Land_Pavement_narrow_corner_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pavement_narrow_corner_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	
	category = "Misc";
};

class PavementNarrow: Exile_AbstractCraftingRecipe
{
	name = "Pavement Narrow";
	pictureItem = "Land_Pavement_narrow_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pavement_narrow_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{1, "Exile_Item_FuelCanisterFull"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Misc";
};

class AltisMap: Exile_AbstractCraftingRecipe
{
	name = "Altis Map";
	pictureItem = "MapBoard_altis_F_Kit";
	returnedItems[] = 
	{
		{1, "MapBoard_altis_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WoodPlank"},
	};
	tools[] =
	{
		"Exile_Item_Handsaw"
	};
	category = "Misc";
};

class CampingTable: Exile_AbstractCraftingRecipe
{
	name = "Camping Table";
	pictureItem = "Land_CampingTable_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CampingTable_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Misc";
};

class CampingLight: Exile_AbstractCraftingRecipe
{
	name = "Campinglight";
	pictureItem = "Land_Camping_Light_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Camping_Light_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers"
	};
	category = "Lamps";
};

class CampingChairV2: Exile_AbstractCraftingRecipe
{
	name = "Camping Chair V2";
	pictureItem = "Land_CampingChair_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CampingChair_V2_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	
	category = "Misc";
};

class CampingChairV1: Exile_AbstractCraftingRecipe
{
	name = "Camping Chair V1";
	pictureItem = "Land_CampingChair_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CampingChair_V1_F_Kit"}
	};
	requiresFire = 1;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Misc";
};

class SmallStone2: Exile_AbstractCraftingRecipe
{
	name = "Small Stone 2";
	pictureItem = "Land_Small_Stone_02_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Small_Stone_02_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	requiresConcreteMixer = 1;
	
	category = "Flora";
};

class SolarPanel2: Exile_AbstractCraftingRecipe
{
	name = "Solar Panel 2";
	pictureItem = "Land_spp_Panel_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_spp_Panel_F_Kit"},
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};	
	category = "Buildings";
};

class SolarPanel: Exile_AbstractCraftingRecipe
{
	name = "Solar Panel";
	pictureItem = "Land_SolarPanel_2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_SolarPanel_2_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};	
	category = "Buildings";
};

class SleepingBag: Exile_AbstractCraftingRecipe
{
	name = "Sleeping Bag";
	pictureItem = "Land_Sleeping_bag_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sleeping_bag_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_Rope"},
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};	
	category = "Misc";
};

class SharpStone2: Exile_AbstractCraftingRecipe
{
	name = "Sharp Stone 2";
	pictureItem = "Land_SharpStone_02_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_SharpStone_02_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};	
	requiresConcreteMixer = 1;
	category = "Flora";
};

class SharpStone1: Exile_AbstractCraftingRecipe
{
	name = "Sharp Stone 1";
	pictureItem = "Land_SharpStone_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_SharpStone_01_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};	
	requiresConcreteMixer = 1;
	category = "Flora";
};

class Pier1: Exile_AbstractCraftingRecipe
{
	name = "Long Pier";
	pictureItem = "Land_nav_pier_m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_nav_pier_m_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};	
	requiresConcreteMixer = 1;
	category = "Buildings";
};

class Bush: Exile_AbstractCraftingRecipe
{
	name = "Bush";
	pictureItem = "Exile_Plant_GreenBush_Kit";
	returnedItems[] = 
	{
		{1, "Exile_Plant_GreenBush_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{5, "Exile_Item_Woodlog"},
	};
	
	tools[] =
	{
		"Exile_Item_Pliers"
	};	
	category = "Flora";
};

class TransmissionTower: Exile_AbstractCraftingRecipe
{
	name = "Transmission Tower";
	pictureItem = "Land_TTowerSmall_1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TTowerSmall_1_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_Rope"},
		{2, "Exile_Item_MetalPole"},
	};
	tools[] =
	{
		"Exile_Item_Foolbox"
	};	
	category = "Buildings";
};

class SignUnexplodedAmmo: Exile_AbstractCraftingRecipe
{
	name = "Unexploded Ammo Sign";
	pictureItem = "Land_Sign_WarningUnexplodedAmmo_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sign_WarningUnexplodedAmmo_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalScrews"}
	};
	tools[] =
	{
		"Exile_Item_Foolbox",
		"Exile_Item_Screwdriver"
	};	
	category = "Signs";
};

class CastleTower: Exile_AbstractCraftingRecipe
{
	name = "Castle Tower";
	pictureItem = "Land_Castle_01_tower_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Castle_01_tower_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};	
	requiresConcreteMixer = 1;
	category = "Buildings";
};

class BeachBooth: Exile_AbstractCraftingRecipe
{
	name = "Beach Booth";
	pictureItem = "Land_BeachBooth_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BeachBooth_01_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_Woodlog"},
		{1, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};	
	category = "Misc";
};

class Barracks: Exile_AbstractCraftingRecipe
{
	name = "Barracks";
	pictureItem = "Land_i_Barracks_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_i_Barracks_V1_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};

class AirportTower: Exile_AbstractCraftingRecipe
{
	name = "Airport Tower";
	pictureItem = "Land_Airport_Tower_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Airport_Tower_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_Woodlog"},
		{2, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel"
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};

class Shabbylamp: Exile_AbstractCraftingRecipe
{
	name = "Shabby Lamp";
	pictureItem = "Land_LampShabby_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_LampShabby_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{8, "Exile_Item_Woodlog"},
		{2, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_LightBulb"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_LightBulb"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Handsaw"
	};
	category = "Lamps";
};

class Sunshade: Exile_AbstractCraftingRecipe
{
	name = "Sunshade";
	pictureItem = "Land_Sunshade_04_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sunshade_04_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Woodlog"},
		{1, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Misc";
};

class Sunchair: Exile_AbstractCraftingRecipe
{
	name = "Sunchair";
	pictureItem = "Land_Sun_chair_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sun_chair_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Woodlog"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver"
	};
	category = "Misc";
};

class SolarTower: Exile_AbstractCraftingRecipe
{
	name = "Solar Tower";
	pictureItem = "Land_spp_Tower_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_spp_Tower_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_Cement"},
		{4, "Exile_Item_LightBulb"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
		"Exile_Item_Grinder"
	};
	category = "Buildings";
};

class MetalShed: Exile_AbstractCraftingRecipe
{
	name = "Metal Shed";
	pictureItem = "Land_Metal_Shed_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Metal_Shed_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_Woodlog"},
		{4, "Exile_Item_MetalWire"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver"
	};
	category = "Buildings";
};

class AirplaneHangar: Exile_AbstractCraftingRecipe
{
	name = "Airplane Hangar";
	pictureItem = "Land_Hangar_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Hangar_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalWire"},
		{4, "Exile_Item_DuctTape"},
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Buildings";
};

class BigDome: Exile_AbstractCraftingRecipe
{
	name = "Big Dome";
	pictureItem = "Land_Dome_Big_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Dome_Big_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"},
		{4, "Exile_Item_Rope"},
		{4, "Exile_Item_MetalWire"},
		{4, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Buildings";
};

class StreetLamp: Exile_AbstractCraftingRecipe
{
	name = "Street Lamp";
	pictureItem = "Land_LampStreet_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_LampStreet_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_ExtensionCord"},
		{1, "Exile_Item_LightBulb"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Lamps";
};

class TavernMiddle: Exile_AbstractCraftingRecipe
{
	name = "Tavern middle";
	pictureItem = "Land_i_Addon_03mid_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_i_Addon_03mid_V1_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{5, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	category = "Buildings";
};

class Tavern: Exile_AbstractCraftingRecipe
{
	name = "Tavern";
	pictureItem = "Land_i_Addon_03_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_i_Addon_03_V1_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{5, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	
	category = "Buildings";
};

class SeaWall: Exile_AbstractCraftingRecipe
{
	name = "Sea Wall";
	pictureItem = "Land_Sea_Wall_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sea_Wall_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Flora";
};

class Industryfence3pts: Exile_AbstractCraftingRecipe
{
	name = "Industryfence 3pts";
	pictureItem = "Land_IndFnc_9_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_IndFnc_9_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class Industryfence: Exile_AbstractCraftingRecipe
{
	name = "Industryfence";
	pictureItem = "Land_IndFnc_3_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_IndFnc_3_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};	

class CargoContainerSmall: Exile_AbstractCraftingRecipe
{
	name = "Cargo Container Small";
	pictureItem = "Land_CargoBox_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CargoBox_V1_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Container";
};	

class BlockConcrete: Exile_AbstractCraftingRecipe
{
	name = "Concrete Block";
	pictureItem = "BlockConcrete_F_Kit";
	returnedItems[] = 
	{
		{1, "BlockConcrete_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Misc";
};	

class Chair: Exile_AbstractCraftingRecipe
{
	name = "Chair";
	pictureItem = "Land_ChairWood_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ChairWood_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	category = "Misc";
};	

class Pierbox: Exile_AbstractCraftingRecipe
{
	name = "Pierbox";
	pictureItem = "Land_Pier_Box_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pier_Box_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_Cement"},
		{4, "Exile_Item_Sand"},
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};	

class Toiletbox: Exile_AbstractCraftingRecipe
{
	name = "Toiletbox";
	pictureItem = "Land_ToiletBox_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ToiletBox_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	category = "Misc";
};	
		
class Table: Exile_AbstractCraftingRecipe
{
	name = "Table";
	pictureItem = "Land_TableDesk_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TableDesk_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{10, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	category = "Misc";
};			

class Slumplane: Exile_AbstractCraftingRecipe
{
	name = "Slumplane";
	pictureItem = "Land_Cargo_addon02_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo_addon02_V2_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{4, "Exile_Item_Woodlog"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};	
	category = "Buildings";
};		

class Radarsmall: Exile_AbstractCraftingRecipe
{
	name = "Small Radar";
	pictureItem = "Land_Radar_Small_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Radar_Small_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{5, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};	
	category = "Buildings";
};
		
class Floodlightdouble: Exile_AbstractCraftingRecipe
{
	name = "Floodlight double";
	pictureItem = "Land_PortableLight_double_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_PortableLight_double_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{6, "Exile_Item_LightBulb"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};	
	category = "Lamps";
};

class CncWallSmall8m: Exile_AbstractCraftingRecipe
{
	name = "Small concrete wall 8m";
	pictureItem = "Land_Concrete_SmallWall_8m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Concrete_SmallWall_8m_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class CncWallSmall4m: Exile_AbstractCraftingRecipe
{
	name = "Small concrete wall 4m";
	pictureItem = "Land_Concrete_SmallWall_4m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Concrete_SmallWall_4m_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class MilitaryVehicle: Exile_AbstractCraftingRecipe
{
	name = "Military Vehicle Sign";
	pictureItem = "Land_Sign_WarningMilitaryVehicles_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sign_WarningMilitaryVehicles_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Signs";
};

class MilSignSmall: Exile_AbstractCraftingRecipe
{
	name = "Military Sign Small";
	pictureItem = "Land_Sign_WarningMilAreaSmall_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sign_WarningMilAreaSmall_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Signs";
};

class Watersource: Exile_AbstractCraftingRecipe
{
	name = "Watersource";
	pictureItem = "Land_Water_source_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Water_source_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Misc";
};

class TouristShelter: Exile_AbstractCraftingRecipe
{
	name = "Tourist Shelter";
	pictureItem = "Land_TouristShelter_01_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TouristShelter_01_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_Cement"},
		{5, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};

class BigShed: Exile_AbstractCraftingRecipe
{
	name = "Big Shed";
	pictureItem = "Land_Shed_Big_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Shed_Big_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_MetalPole"},
		{4, "Exile_Item_MetalBoard"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Foolbox"
	};
	category = "Buildings";
};

class crashbarrier: Exile_AbstractCraftingRecipe
{
	name = "Crashbarrier";
	pictureItem = "Land_Crash_barrier_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Crash_barrier_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
	};
	category = "Buildings";
};

class cncbarriermedium: Exile_AbstractCraftingRecipe
{
	name = "CNC Barrier Medium";
	pictureItem = "Land_CncBarrierMedium_F_Kit";
	returnedItems[] = 
	{
		{2, "Land_CncBarrierMedium_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class cncbarrier1: Exile_AbstractCraftingRecipe
{
	name = "CNC Barrier 1";
	pictureItem = "Land_CncWall1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CncWall1_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class Airportlamp: Exile_AbstractCraftingRecipe
{
	name = "Airportlamp";
	pictureItem = "Land_LampAirport_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_LampAirport_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_ExtensionCord"},
		{4, "Exile_Item_LightBulb"},
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
	};
	category = "Lamps";
};

class LampHalogen: Exile_AbstractCraftingRecipe
{
	name = "Halogen Base Lamp";
	pictureItem = "Land_LampHalogen_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_LampHalogen_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{10, "Exile_Item_LightBulb"},
		{5, "Exile_Item_ExtensionCord"},
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalWire"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
		"Exile_Item_Pliers",
	};
	category = "Lamps";
};

class TentHangar: Exile_AbstractCraftingRecipe
{
	name = "Tent Hangar";
	pictureItem = "Land_TentHangar_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TentHangar_V1_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_Woodlog"},
		{2, "Exile_Item_MetalPole"},
		{3, "Exile_Item_Rope"},
		{5, "Exile_Item_DuctTape"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Handsaw",
		"Exile_Item_Screwdriver"
	};
	category = "Buildings";
};

class TentDome: Exile_AbstractCraftingRecipe
{
	name = "Tent Dome";
	pictureItem = "Land_TentDome_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_TentDome_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{2, "Exile_Item_Woodlog"},
		{2, "Exile_Item_Rope"},
		{1, "Exile_Item_DuctTape"},
	};
	
	category = "Misc";
};

class Platform: Exile_AbstractCraftingRecipe
{
	name = "Platform";
	pictureItem = "Land_GH_Platform_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_GH_Platform_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};

class Garage: Exile_AbstractCraftingRecipe
{
	name = "Garage";
	pictureItem = "Land_i_Garage_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_i_Garage_V2_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_Cement"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
		"Exile_Item_Screwdriver"
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};

class CNCStairs: Exile_AbstractCraftingRecipe
{
	name = "CNC Stairs";
	pictureItem = "Land_GH_Stairs_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_GH_Stairs_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};

class CargoContainerSandSmall: Exile_AbstractCraftingRecipe
{
	name = "Cargo container Sand Small";
	pictureItem = "Land_Cargo20_sand_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo20_sand_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
	};
	category = "Container";
};

class Brokenshed: Exile_AbstractCraftingRecipe
{
	name = "Broken Shed";
	pictureItem = "Land_u_Addon_01_V1_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_u_Addon_01_V1_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{6, "Exile_Item_WoodPlank"},
		{4, "Exile_Item_Cement"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	category = "Buildings";
};

class Razorwire: Exile_AbstractCraftingRecipe
{
	name = "Razorwire";
	pictureItem = "Land_Razorwire_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Razorwire_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{6, "Exile_Item_MetalWire"},
	};
	tools[] =
	{
		"Exile_Item_Pliers",
		"Exile_Item_Grinder"
	};
	category = "Walls";
};

class SmallShed: Exile_AbstractCraftingRecipe
{
	name = "Small Shed";
	pictureItem = "Land_Shed_Small_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Shed_Small_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	category = "Buildings";
};

class FuelstationShed: Exile_AbstractCraftingRecipe
{
	name = "Fuelstation Shed";
	pictureItem = "Land_FuelStation_Shed_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_FuelStation_Shed_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"},
		{4, "Exile_Item_WoodPlank"},
		{4, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder"
	};
	category = "Buildings";
};

class CNCWallType2: Exile_AbstractCraftingRecipe
{
	name = "CNC Wall Type 2";
	pictureItem = "Land_CncWall4_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CncWall4_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class CNCWall: Exile_AbstractCraftingRecipe
{
	name = "CNC Wall";
	pictureItem = "Land_Wall_IndCnc_2deco_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Wall_IndCnc_2deco_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};


class CNCShelter: Exile_AbstractCraftingRecipe
{
	name = "CNC Shelter";
	pictureItem = "Land_CncShelter_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CncShelter_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};


class SlumContainer: Exile_AbstractCraftingRecipe
{
	name = "Slum Container";
	pictureItem = "Land_cargo_house_slum_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_cargo_house_slum_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Buildings";
};

class HugeContainer: Exile_AbstractCraftingRecipe
{
	name = "Huge Container";
	pictureItem = "Land_Cargo40_light_green_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo40_light_green_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{6, "Exile_Item_JunkMetal"},
		{6, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Container";
};

class CargoHouse: Exile_AbstractCraftingRecipe
{
	name = "Military Cargo House";
	pictureItem = "Land_Cargo_House_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo_House_V2_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_JunkMetal"},
		{6, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Buildings";
};

class ShootingPos: Exile_AbstractCraftingRecipe
{
	name = "Shooting Pos";
	pictureItem = "ShootingPos_F_Kit";
	returnedItems[] = 
	{
		{1, "ShootingPos_F_Kit"}
	};
	requiresFire = 0;
	components[] = 
	{
		{4, "Exile_Item_Woodlog"},
	};
	
	category = "Misc";
};

class BagBunkerBig: Exile_AbstractCraftingRecipe
{
	name = "Bag Bunker Big";
	pictureItem = "Land_BagBunker_Large_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagBunker_Large_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_Sand"},
		{5, "Exile_Item_MetalWire"},
		{4, "Exile_Item_WoodPlank"},
	};
	tools[] =
	{
		"Exile_Item_Pliers",
	};
	category = "Buildings";
};

class Pumpstation: Exile_AbstractCraftingRecipe
{
	name = "Pumpstation";
	pictureItem = "Land_FuelStation_Feed_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_FuelStation_Feed_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_JunkMetal"},
		{1, "Exile_Item_WaterBarrelKit"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
	};
	category = "Misc";
};

class CargoTowerBig: Exile_AbstractCraftingRecipe
{
	name = "Cargo Tower Big";
	pictureItem = "Land_Cargo_Tower_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo_Tower_V2_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{6, "Exile_Item_MetalBoard"},
		{1, "Land_Cargo_House_V2_F_Kit"},
		{6, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
	};
	category = "Buildings";
};

class MetalShelf: Exile_AbstractCraftingRecipe
{
	name = "Metal Shelf";
	pictureItem = "Land_ShelvesMetal_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_ShelvesMetal_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_MetalBoard"},
		{5, "Exile_Item_WoodPlank"},
		{5, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
	};
	category = "Container";
};

class RustyTank: Exile_AbstractCraftingRecipe
{
	name = "RustyTank";
	pictureItem = "Land_Tank_rust_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Tank_rust_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_WaterBarrelKit"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
	};
	category = "Misc";
};

class Steelfence: Exile_AbstractCraftingRecipe
{
	name = "Steelfence";
	pictureItem = "Land_Wall_Tin_4_Kit";
	returnedItems[] = 
	{
		{1, "Land_Wall_Tin_4_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
	};
	category = "Misc";
};

class Pier: Exile_AbstractCraftingRecipe
{
	name = "Pier";
	pictureItem = "Land_Pier_small_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pier_small_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{10, "Exile_Item_Woodlog"},
		{5, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	category = "Buildings";
};

class LandCargoPatrol: Exile_AbstractCraftingRecipe
{
	name = "Land Cargo Patrol";
	pictureItem = "Land_Cargo_Patrol_V2_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo_Patrol_V2_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalPole"},
		{3, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
	};
	category = "Buildings";
};

class CncWallMil4M: Exile_AbstractCraftingRecipe
{
	name = "Concrete Wall Military 4m";
	pictureItem = "Land_Mil_WallBig_4m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Mil_WallBig_4m_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class MilitaryArea: Exile_AbstractCraftingRecipe
{
	name = "Military Area";
	pictureItem = "Land_Sign_WarningMilitaryArea_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Sign_WarningMilitaryArea_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
	};
	category = "Signs";
};


class Icebox: Exile_AbstractCraftingRecipe
{
	name = "Icebox";
	pictureItem = "Land_Icebox_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Icebox_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalBoard"},
		{10, "Exile_Item_PlasticBottleEmpty"},
		{1, "Exile_Item_DuctTape"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Pliers",
	};
	category = "Container";
};

class Bargate: Exile_AbstractCraftingRecipe
{
	name = "Bar Gate";
	pictureItem = "Land_BarGate_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BarGate_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{3, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
		"Exile_Item_Grinder",
	};
	category = "Misc";
};

class Citygate: Exile_AbstractCraftingRecipe
{
	name = "City Gate";
	pictureItem = "Land_City_Gate_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_City_Gate_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_MetalScrews"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
		"Exile_Item_Screwdriver",
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};

class Rack: Exile_AbstractCraftingRecipe
{
	name = "A Shelf";
	pictureItem = "Land_Rack_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Rack_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_WoodPlank"},
		{2, "Exile_Item_JunkMetal"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	category = "Container";
};


class HeliPad: Exile_AbstractCraftingRecipe
{
	name = "Helipad";
	pictureItem = "Land_HelipadCivil_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_HelipadCivil_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_WaterCanisterDirtyWater"},
		{2, "Exile_Item_DuctTape"},
		{2, "Exile_Item_Cement"},
	};
	tools[] =
	{
		"Exile_Item_CookingPot",
	};
	category = "Misc";
};

class ConcreteWall8m: Exile_AbstractCraftingRecipe
{
	name = "Concrete Wall 8m";
	pictureItem = "Land_City2_8m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_City2_8m_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class ConcreteWall4m: Exile_AbstractCraftingRecipe
{
	name = "Concrete Wall 4m";
	pictureItem = "Land_City2_4m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_City2_4m_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class ConcreteWall1: Exile_AbstractCraftingRecipe
{
	name = "Concrete Wall";
	pictureItem = "Land_Wall_IndCnc_4_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Wall_IndCnc_4_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class ConcreteRamp: Exile_AbstractCraftingRecipe
{
	name = "Concrete Ramp";
	pictureItem = "Land_RampConcrete_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_RampConcrete_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class SandbagBarrierBigCorner: Exile_AbstractCraftingRecipe
{
	name = "Sandbag Barrier Big Corner";
	pictureItem = "Land_HBarrierWall_corner_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_HBarrierWall_corner_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_Sand"},
		{2, "Exile_Item_MetalWire"},
	};
	tools[] =
	{
		"Exile_Item_Pliers",
	};
	category = "Walls";
};

class BunkerHuge: Exile_AbstractCraftingRecipe
{
	name = "Bunker HUGE";
	pictureItem = "Land_Bunker_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Bunker_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Land_Cargo40_light_green_F_Kit"},
		{2, "Exile_Item_Cement"},
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Container";
};


class BagBunkerSmall: Exile_AbstractCraftingRecipe
{
	name = "Bag Bunker Small";
	pictureItem = "Land_BagBunker_Small_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagBunker_Small_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_Sand"},
		{1, "Exile_Item_Cement"},
		{4, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Buildings";
};

class MetalWoodenRack: Exile_AbstractCraftingRecipe
{
	name = "Metal Wooden Shelf";
	pictureItem = "Land_Metal_wooden_rack_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Metal_wooden_rack_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"},
		{3, "Exile_Item_WoodPlank"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver"
	};
	category = "Container";
};

class SandbagTower: Exile_AbstractCraftingRecipe
{
	name = "Sandbag Tower";
	pictureItem = "Land_HBarrierTower_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_HBarrierTower_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{5, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_MetalPole"},
		{2, "Exile_Item_MetalWire"},
	};
	tools[] =
	{
		"Exile_Item_Pliers",
	};
	category = "Buildings";
};

class SandbagsLong: Exile_AbstractCraftingRecipe
{
	name = "Sandbags Long";
	pictureItem = "Land_BagFence_Long_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagFence_Long_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Sand"},
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	category = "Walls";
};

class SandbagCorner: Exile_AbstractCraftingRecipe
{
	name = "Sandbag Corner";
	pictureItem = "Land_BagFence_Corner_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagFence_Corner_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Sand"},
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	category = "Walls";
};

class LandContainer: Exile_AbstractCraftingRecipe
{
	name = "LandContainer";
	pictureItem = "Land_Cargo20_military_green_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Cargo20_military_green_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{6, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Screwdriver",
	};
	category = "Container";
};

class Ammobox: Exile_AbstractCraftingRecipe
{
	name = "Ammobox";
	pictureItem = "Land_Pallet_MilBoxes_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Pallet_MilBoxes_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_StorageCrateKit"},
		{2, "Exile_Item_JunkMetal"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Foolbox",
	};
	category = "Container";
};

class Watercooler: Exile_AbstractCraftingRecipe
{
	name = "Water Cooler";
	pictureItem = "Land_WaterCooler_01_new_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_WaterCooler_01_new_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{4, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_WaterBarrelKit"},
		{1, "Exile_Item_MetalScrews"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Screwdriver",
	};
	category = "Misc";
};

class CncBarrier: Exile_AbstractCraftingRecipe
{
	name = "Concrete Barrier";
	pictureItem = "Land_CncBarrier_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_CncBarrier_F_Kit"},
		{1,"Exile_Item_WaterCanisterEmpty"},
		{1,"Exile_Item_FuelCanisterEmpty"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
		{1, "Exile_Item_FuelCanisterFull"},
		{1, "Exile_Item_WaterCanisterDirtyWater"}
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class Stonewall: Exile_AbstractCraftingRecipe
{
	name = "Stone Wall";
	pictureItem = "Land_Stone_4m_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Stone_4m_F_Kit"}
	};
	requiresFire = 0;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
	};
	tools[] =
	{
		"Exile_Item_Shovel",
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class Stonegate: Exile_AbstractCraftingRecipe
{
	name = "Stone Gate";
	pictureItem = "Land_Stone_Gate_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_Stone_Gate_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{1, "Exile_Item_MetalPole"},
		{1, "Exile_Item_MetalBoard"},
		{1, "Exile_Item_Cement"},
		{1, "Exile_Item_Sand"},
	};
	tools[] =
	{
		"Exile_Item_Shovel",
		"Exile_Item_Grinder"
	};
	requiresConcreteMixer = 1;
	category = "Walls";
};

class PierLadder: Exile_AbstractCraftingRecipe
{
	name = "Ladder";
	pictureItem = "PierLadder_F_Kit";
	returnedItems[] = 
	{
		{1, "PierLadder_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_MetalPole"},
		{2, "Exile_Item_JunkMetal"},
	};
	tools[] =
	{
		"Exile_Item_Grinder"
	};
	category = "Misc";
};

class CamoNetOPFORopen: Exile_AbstractCraftingRecipe
{
	name = "CamoNet OPFOR open";
	pictureItem = "CamoNet_OPFOR_open_F_Kit";
	returnedItems[] = 
	{
		{1, "CamoNet_OPFOR_open_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_MetalWire"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	category = "Buildings";
};

class CamoNetINDPopen: Exile_AbstractCraftingRecipe
{
	name = "CamoNet INDP open";
	pictureItem = "CamoNet_INDP_open_F_Kit";
	returnedItems[] = 
	{
		{1, "CamoNet_INDP_open_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_MetalWire"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	category = "Buildings";
};

class CamoNetBLUFORopen: Exile_AbstractCraftingRecipe
{
	name = "CamoNet BLUFOR open";
	pictureItem = "CamoNet_BLUFOR_open_F_Kit";
	returnedItems[] = 
	{
		{1, "CamoNet_BLUFOR_open_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{2, "Exile_Item_MetalPole"},
		{1, "Exile_Item_DuctTape"},
		{1, "Exile_Item_MetalWire"},
	};
	tools[] =
	{
		"Exile_Item_Grinder",
		"Exile_Item_Pliers"
	};
	category = "Buildings";
};



class Barrier1: Exile_AbstractCraftingRecipe  //thank you MrDynamite for sharing better Receipideas :)
{
    name = "Barrier";
    pictureItem = "Land_HBarrier_1_F_Kit";
    returnedItems[] =
    {
        {1, "Land_HBarrier_1_F_Kit"}
    };
    requiresFire = 0;
    requiredInteractionModelGroup = "WorkBench";
    components[] =
    {
        {1, "Exile_Item_Sand"}, // Change
		{1, "Exile_Item_MetalWire"},
    };
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "Walls";
};

class Barrier3: Exile_AbstractCraftingRecipe
{
    name = "Barrier3";
    pictureItem = "Land_HBarrier_3_F_Kit";
    returnedItems[] =
    {
        {1, "Land_HBarrier_3_F_Kit"}
    };
    requiresFire = 0;
    requiredInteractionModelGroup = "WorkBench";
    components[] =
    {
		{2, "Exile_Item_Sand"}, // Change
		{1, "Exile_Item_MetalWire"},
    };
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "Walls";
};

class Barrier5: Exile_AbstractCraftingRecipe
{
    name = "Barrier5";
    pictureItem = "Land_HBarrier_5_F_Kit";
    returnedItems[] =
    {    
        {1, "Land_HBarrier_5_F_Kit"}
    };
    requiresFire = 0;
    requiredInteractionModelGroup = "WorkBench";
    components[] =
    {
		{3, "Exile_Item_Sand"}, // Change
		{1, "Exile_Item_MetalWire"},
    };
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "Walls";
};

class SandbagBarrierBig4m: Exile_AbstractCraftingRecipe
{
    name = "Sandbag Barrier Big 4m";
    pictureItem = "Land_HBarrierWall4_F_Kit";
    returnedItems[] =
    {
        {1, "Land_HBarrierWall4_F_Kit"}
    };
    requiresFire = 0;
    requiredInteractionModelGroup = "WorkBench";
    components[] =
    {
        {1, "Land_HBarrier_3_F_Kit"},
		{2, "Exile_Item_Sand"}, // Change
		{2, "Exile_Item_MetalWire"},
    };
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "Walls";
};

class SandbagBarrierBig6m: Exile_AbstractCraftingRecipe
{
    name = "Sandbag Barrier Big 6m";
    pictureItem = "Land_HBarrierWall6_F_Kit";
    returnedItems[] =
    {
        {1, "Land_HBarrierWall6_F_Kit"}
    };
    requiresFire = 0;
    requiredInteractionModelGroup = "WorkBench";
    components[] =
    {
        {1, "Land_HBarrierWall4_F_Kit"},
		{2, "Exile_Item_Sand"}, // Change
		{2, "Exile_Item_MetalWire"},
    };
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "Walls";
};


class BagBunker: Exile_AbstractCraftingRecipe
{
	name = "BagBunker";
	pictureItem = "Land_BagBunker_Tower_F_Kit";
	returnedItems[] = 
	{
		{1, "Land_BagBunker_Tower_F_Kit"}
	};
	requiresFire = 1;
	requiredInteractionModelGroup = "WorkBench";
	components[] = 
	{
		{3, "Exile_Item_Sand"},
		{1, "Exile_Item_MetalBoard"},
		{2, "Exile_Item_MetalPole"},
		{2, "Exile_Item_WoodPlank"},
		{5, "Exile_Item_MetalWire"},
	};
	tools[] =
	{
		"Exile_Item_Pliers"
	};
	category = "Buildings";
};