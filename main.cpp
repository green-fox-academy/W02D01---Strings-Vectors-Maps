#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iterator>
#include <unordered_map>

//STRINGS!!

//REPLACE
/* int main() {
    std::string example = "In a dishwasher far far away";
    example.replace(5, 10, "galaxy");
    std::cout << example << std::endl;
    return 0;
    //Mire kell figyelni: a position 0-tól kezdődik! képlet: pos, cserélendő hossza, csere szöveg;
} */

//URL FIXER
/* int main() {
    std::string url("https//www.reddit.com/r/nevertellmethebots");
    url.replace(38, 3, "odd");
    url.insert(5, ":");
    std::cout << url << std::endl;
    return 0;
} */

//QUOTE
/* int main() {
    std::string quote("Hofstadter's Law: It you expect, even when you take Hofstadter's Law into account.");
    quote.insert(20, " always takes longer than");
    std::cout << quote << std::endl;
    return 0;
} */

//TO DO
/*
int main() {
    std::string todoText = " - Buy milk\n";
    todoText.insert(0, "My todo:\n");
    todoText.append(" - Download games\n" "    "" - Diablo\n");
    std::cout << todoText << std::endl;
} */

//REVERSE
/* void reversestri(std::string&);
int main() {
    std::string reversed = ".eslaf eb t'ndluow ecnetnes siht ,dehctiws erew eslaf dna eurt fo sgninaem eht fI";
    reversestri(reversed);
    std::cout << reversed << std::endl;
    return 0;
}
void reversestri(std::string& reversed)
{
    int n = reversed.length();
    for (int i = 0; i < n/2; ++i) {
        std::swap(reversed[i], reversed[n - i - 1]);
    }
} */

//VECTORS!!

//LISTS 1
/* int main() {
    std::vector<std::string> Names;
    std::cout << Names.size() << std::endl;
    Names.push_back("William");
    Names.push_back("John");
    Names.push_back("Amanda");
    for (int i = 0; i < Names.size(); ++i) {
        std::cout << i+1 << "." << Names[i] << std::endl;
    }
    std::cout << Names.at(2) << std::endl;
    Names.erase(Names.begin()+1);
    for (int i = 0; i < Names.size(); ++i) {
        std::cout << i+1 << "." << Names[i] << std::endl;
    }
    Names.clear();
    return 0;
} */

//LISTS 2
/*
int main() {
    std::vector<std::string> ListA{"Apple", "Avocado", "Blueberry", "Durian", "Lychee"};
    std::vector<std::string> ListB{"Apple", "Avocado", "Blueberry", "Durian", "Lychee"};
    if (std::binary_search(ListA.begin(), ListA.end(), "Durian")) {
        std::cout << "List has Durian on it" << std::endl;
    }
    ListB.erase(ListB.begin()+3);
    ListA.insert(ListA.begin()+3, "Kiwifruit");
    if (ListA.size()>ListB.size()) {
        std::cout << "List A has more fruits than List B" << std::endl;
    } else if (ListA.size()==ListB.size()) {
        std::cout << "List A has equal amount of fruits as List B" << std::endl;
    } else if (ListA.size()<ListB.size()){
        std::cout << "List B has more fruits than List A" << std::endl;
    }
    std::vector<std::string>::iterator it = std::find(ListA.begin(), ListA.end(), "Avocado");
    if (it != ListA.cend()) {
        std::cout << "Avocado is at index " <<
        std::distance(ListA.begin(), it);
        std::cout << std::endl;
    } else {
        std::cout << "It's not on the list" << std::endl;
    }
    std::vector<std::string>::iterator itr = std::find(ListB.begin(), ListB.end(), "Durian");
    if (itr != ListB.cend()) {
        std::cout << "Durian is at index " <<
                  std::distance(ListB.begin(), itr);
    } else {
        std::cout << "It's not on the list" << std::endl;
    }
    ListB.insert(ListB.end(), {"Passion fruit", "Pomelo"});
    std::cout << ListA.at(3) << std::endl;
    return 0;
} */

//FINANCE
/* int main() {
    std::vector<int> finance{500, 1000, 1250, 175, 800, 120};
    int sum;
    for (int i = 0; i < finance.size(); ++i) {
        sum= sum+finance[i];
    }
    std::cout << "We spent :" << sum << std::endl;
    double max = *max_element(finance.begin(), finance.end());
    std::cout << "The greatest amount we spent: "<< max << std::endl;
    double min = *min_element(finance.begin(), finance.end());
    std::cout << "The smallest amount we spent: "<< min << std::endl;
    int average = sum/finance.size();
    std::cout << "The average is: " << average << std::endl;
} */

//SHOPPING LIST
/* int main() {
    std::vector<std::string> shopList{"Eggs", "Milk", "Fish", "Apples", "Bread", "Chicken"};
    std::vector<std::string>::iterator itr = std::find(shopList.begin(), shopList.end(), "Milk");
    if (itr != shopList.cend()) {
        std::cout << "Milk is on the list" << std::endl;
    } else {
        std::cout << "It's not on the list" << std::endl;
    }
    itr = std::find(shopList.begin(), shopList.end(), "Banana");
    if (itr != shopList.cend()) {
        std::cout << "Banana is on the list" << std::endl;
    } else {
        std::cout << "It's not on the list" << std::endl;
    }
    return 0;
} */

//MAPPING

//MAP INTRODUCTION 1
/* int main() {
    std::map<int, std::string> emptyBOI;
    emptyBOI.insert(std::pair <int, std::string>(97, "a"));
    emptyBOI.insert(std::pair <int, std::string>(98, "b"));
    emptyBOI.insert(std::pair <int, std::string>(99, "c"));
    emptyBOI.insert(std::pair <int, std::string>(65, "A"));
    emptyBOI.insert(std::pair <int, std::string>(66, "B"));
    emptyBOI.insert(std::pair <int, std::string>(67, "C"));
    std::map<int, std::string>::iterator it = emptyBOI.begin();
    for (std::pair <int, std::string> element : emptyBOI) {
        std::string word = element.second;
        int count = element.first;
        std::cout << word << " :: " << count << std::endl;
    }
    emptyBOI.insert(std::pair <int, std::string>(68, "D"));
    std::cout << emptyBOI.size() << std::endl;
    std::cout << emptyBOI.at(99) << std::endl;
    it = emptyBOI.find(97);
    emptyBOI.erase (it);
    if (emptyBOI.find(100) != emptyBOI.end()){
        std::cout << "It exists" << std::endl;
    }
    emptyBOI.clear();
    return 0;
} */

//MAPPING 2

/* int main() {
    std::map<std::string, std::string> PIE;
    PIE.emplace("978-1-60309-452-8", "A Letter to Jo");
    PIE.emplace("978-1-60309-459-7", "Lupus");
    PIE.emplace("978-1-60309-444-3", "Red Panda and Moon Bear");
    PIE.emplace("978-1-60309-461-0", "The Lab");
    std::map<std::string, std::string>::iterator itr = PIE.begin();
    for (std::pair <std::string, std::string> element : PIE) {
        std::cout << element.second << "(ISBN: " << element.first << ")" << std::endl;
    }
    PIE.erase("978-1-60309-444-3");
    PIE.emplace("978-1-60309-450-4", "They Called Us Enemy");
    PIE.emplace("978-1-60309-453-5", "Why Did We Trust Him?");
    if (PIE.find("478-0-61159-424-8") != PIE.end()){
        std::cout << "It exists" << std::endl;
    }
    std::cout << PIE.at("978-1-60309-453-5") << std::endl;
    return 0;
} */

//TELEPHONE BOOK
/* int main() {
    std::map<std::string, std::string> PIE2;
    PIE2.emplace("William A. Lathan", "405-709-1865");
    PIE2.emplace("John K. Miller", "402-247-8568");
    PIE2.emplace("Hortensia E. Foster", "606-481-6467");
    PIE2.emplace("Amanda D. Newland", "319-243-5613");
    PIE2.emplace("Brooke P. Askew", "307-687-2982");
    std::cout << "John's number is: "<< PIE2.at("John K. Miller") << std::endl;
    std::string numname = "empty";
    for (auto &i : PIE2) {
        if (i.second == "307-687-2982") {
            numname = i.first;
            break;
        }
    }
    std::cout << "The number belongs to " << numname << std::endl;
    if (PIE2.find("Chris E.Myers") != PIE2.end()){
        std::cout << "We know Chris' number" << std::endl;
    } else {
        std::cout << "We don't know Chris' number\n";
    }

    return 0;
} */

//PRODUCT DATABASE
/* int main() {
    std::map<std::string, int> database{
        std::make_pair("Eggs", 200),
        std::make_pair("Milk", 200),
        std::make_pair("Fish",400),
        std::make_pair("Apples", 150),
        std::make_pair("Bread", 50),
        std::make_pair("Chicken", 550)
    };
    std::cout << "The fish is " << database.at("Fish") << "." << std::endl;
    int mose;
    std::string mosepro;
    int chea;
    std::string cheapro;
    for(auto it = database.cbegin(); it != database.cend(); ++it) {
        if (it ->second > mose) {
            mosepro = it->first;
            mose = it->second;
        } else if (it ->second < chea) {
            cheapro = it->first;
            chea = it->second;
        }
    }
    for(auto it = database.cbegin(); it != database.cend(); ++it) {}
    std::cout << "The most expensive product is " << mosepro << "." << " It costs " << mose << "." << std::endl;
    std::cout << "The cheapest product is " << cheapro << "." << " It costs " << chea << "." << std::endl;

    int sum;
    for (auto it = database.cbegin(); it != database.cend(); ++it) {
        sum = sum + it->second;
    }
    int avg = sum/ database.size();
    std::cout << "The average price is " << avg << std::endl;

    int prod300;
    for (auto it = database.cbegin(); it != database.cend(); ++it) {
        if (it->second < 300) {
            prod300++;
        }
    }
    std::cout << "There are " << prod300 << " products below 300." << std::endl;
    int pr125;
    for (auto it = database.cbegin(); it != database.cend(); ++it) {
        if (it->second < 125) {
            pr125 = 0;
        } else if (it->second > 125) {
            pr125 = 0;
        } else {
            pr125++;
        }
    }
    std::cout << "There are " << pr125 << " products we can buy for 125." << std::endl;

    std::cout << "Less than 201: \n";
    for (auto it = database.cbegin(); it != database.cend(); ++it) {
        if (it->second < 201) {
            std::cout << it->first << std::endl;
        }
    }
    std::cout << "More than 150: \n";
    for (auto it = database.cbegin(); it != database.cend(); ++it) {
        if (it->second > 150) {
            std::cout << it->first << " " << it->second << std::endl;
        }
    }

    return 0;
} */

//SHOPPING LIST 2
int main() {
    std::map<std::string, int> boblist{
        std::make_pair("Milk", 3),
        std::make_pair("Rice", 2),
        std::make_pair("Eggs", 2),
        std::make_pair("Cheese", 1),
        std::make_pair("Chicken Breasts", 4),
        std::make_pair("Apples", 1),
        std::make_pair("Tomato", 2),
        std::make_pair("Potato", 1)
    };
    std::map<std::string, int> alist{
            std::make_pair("Rice", 1),
            std::make_pair("Eggs", 5),
            std::make_pair("Chicken Breasts", 2),
            std::make_pair("Apples", 1),
            std::make_pair("Tomato", 10)
    };
    std::map<std::string, float> prices{
            std::make_pair("Milk", 1.07),
            std::make_pair("Rice", 1.59),
            std::make_pair("Eggs", 3.14),
            std::make_pair("Cheese", 12.60),
            std::make_pair("Chicken Breasts", 9.40),
            std::make_pair("Apples", 2.31),
            std::make_pair("Tomato", 2.58),
            std::make_pair("Potato", 1.75),
            std::make_pair("Onion", 1.10),
    };

    return 0;
}

