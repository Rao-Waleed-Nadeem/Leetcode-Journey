//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//class FrontMiddleBackQueue {
//    vector<int>v;
//public:
//    FrontMiddleBackQueue() {
//       
//    }
//
//    void pushFront(int val) {
//        v.insert(v.begin(), val);
//    }
//
//    void pushMiddle(int val) {
//        auto middle = v.begin() + v.size() / 2;
//        v.insert(middle, val);
//    }
//
//    void pushBack(int val) {
//        v.push_back(val);
//    }
//
//    int popFront() {
//        if (v.empty())return -1;
//        int temp = v.front();
//        v.erase(v.begin());
//        return temp;
//    }
//
//    int popMiddle() {
//        if (v.empty()) return -1;
//        auto middle = v.begin() + v.size() / 2;
//        int temp = *middle;
//        v.erase(middle);
//        return temp;
//    }
//
//    int popBack() {
//        if (v.empty())return -1;
//        int temp = v.back();
//        v.pop_back();
//        return temp;
//    }
//};
//
//int main()
//{
//	system("pause");
//	return 0;
//}