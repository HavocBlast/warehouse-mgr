#include <string>
#include "StorageUnit.cpp"
#include <vector>

class StorageRow{

	// Member Variables
	int mMaxUnits;
	std::vector<StorageUnit> mStorageUnits;
	bool mSameItemsOnly;

public:
	StorageRow(){
		mMaxUnits = 25;
		mStorageUnits = std::vector<StorageUnit>(mMaxUnits);
		mSameItemsOnly = true;
	}

	StorageRow(int maxUnits, std::vector<StorageUnit> storageUnits, bool sameItemsOnly){
		mMaxUnits = maxUnits;
		mStorageUnits = storageUnits;
		mSameItemsOnly = sameItemsOnly;
	}

	int GetMaxUnits(){
		return mMaxUnits;
	}

	std::vector<StorageUnit> GetStorageUnits(){
		return mStorageUnits;
	}

	bool isSameItemsOnly(){
		return mSameItemsOnly;
	}

	void SetMaxUnits(int maxUnits){
		mMaxUnits = maxUnits;
	}

	void SetStorageUnits(std::vector<StorageUnit> storageUnits){
		mStorageUnits = storageUnits;
	}

	void SetSameItemsOnly(bool sameItemsOnly){
		mSameItemsOnly = sameItemsOnly;
	}

	void AddStorageUnit(StorageUnit storageUnit){
		mStorageUnits.push_back(StorageUnit(
			storageUnit.GetSUNumber(),
			storageUnit.GetItem()
		));
	}
};
