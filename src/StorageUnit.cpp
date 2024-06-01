#include <string>
#include "Item.cpp"

class StorageUnit {
	// Variables
	std::string mStorageUnitNumber;
	Item mItem;

public:
	// Constructors
	StorageUnit(){
		mStorageUnitNumber = "";
	}

	StorageUnit(std::string storageUnitNumber, Item item ){
		mStorageUnitNumber = storageUnitNumber;
		mItem = item;
	}

	// Getters/Setters
	std::string GetSUNumber(){
		return mStorageUnitNumber;
	}

	Item GetItem(){
		return mItem;
	}

	void SetSUNumber(std::string storageUnitNumber){
		mStorageUnitNumber = storageUnitNumber;
	}

	void SetItem(Item item){
		mItem = item;
	}
};
