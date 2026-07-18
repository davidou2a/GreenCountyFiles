void main()
{
	// economy init
	CreateHive();
	GetHive().InitOffline();

	// comment/remove following 2 lines when not exporting (can cause further issues if you do this each time you start a mission!)
	GetCEApi().ExportProxyData(Vector(5120, GetGame().SurfaceY(5120, 5120), 5120), 10240);
	GetCEApi().ExportClusterData();					// cluster-type map groups export (fruit trees etc.)
	
	GetCEApi().EconomyLog(EconomyLogCategories.MapComplete); // affiche les stats de cet objet en .csv
	//GetCEApi().EconomyLog("SewingKit"); // affiche les stats de cet objet en .csv
	GetCEApi().EconomyMap(EconomyLogCategories.MapComplete); // affiche les lieux de spawn de cet objet en .tga
	
	// player creation
	vector spawnPos = "5120 0 5120";
	Entity playerEnt = GetGame().CreatePlayer(NULL, "SurvivorF_Eva", spawnPos, 0, "NONE");
	PlayerBase player = (PlayerBase) playerEnt;
	GetGame().SelectPlayer(NULL, player);
};