#include "StorageRow.cpp"
#include <string>
#include <vector>

class Warehouse{

	std::string mWarehouseName;
	int mMaxRows;
	std::vector<StorageRow> mStorageRows;
	bool mIsIsolated;	// Will make sure only certain Items are stored here

public:
	Warehouse(){
		mWarehouseName = "";
		mMaxRows = 0;
		mStorageRows = std::vector<StorageRow>(mMaxRows);
		mIsIsolated = false;
	}

	Warehouse(std::string name, int maxRows, std::vector<StorageRow> storageRows, bool isolated ){
		mWarehouseName = name;
		mMaxRows = maxRows;
		mStorageRows = storageRows;
		mIsIsolated = isolated;
	}
};
