#include <string>

	enum itemTypes{
		// TODO: Create a way to make ItemTypes so that it can be changed based
		// on the company's industry

		// WARN: This is industry specific and needs to be changed before prod
		ProboxCorn,
		ProboxSoybean,
		ProboxWheat,
		ProboxEmpty,
		JumbosEmpty,
		BagsEmpty,
		Empty,
	};



class Item{
	std::string itemID;
	std::string itemName;
	int itemQuantity;
	itemTypes itemType;

public:
	Item(){
		itemID = "";
		itemName = "";
		itemQuantity = 0;
		itemType = Empty;
	}

	Item(std::string itemID, std::string itemName, int itemQuanity){
		this->itemID = itemID;
		this->itemName = itemName;
		this->itemQuantity = itemQuanity;
	}

	// Getters and Setters
	std::string GetItemID(){
		return itemID;
	}

	std::string GetItemName(){
		return itemName;
	}

	int GetItemQuantity(){
		return itemQuantity;
	}

	void SetItemID(std::string id){
		itemID = id;
	}

	void SetItemName(std::string name){
		itemName = name;
	}

	void SetItemQuantity(int quantity){
		itemQuantity = quantity;
	}
};
