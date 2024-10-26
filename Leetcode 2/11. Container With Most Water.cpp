//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
//int maxArea(vector<int>& height) {
//    int first = 0, second = 0;
//    int max_area = 0;   
//    for (int i = 0, j = height.size() - 1; i < j;) {
//
//        int h = min(height[i], height[j]);
//        int area = h * (j - i);
//        max_area = max(max_area, area);
//
//        if (height[i] > first) {
//            first = height[i];
//        }
//        if (height[j] > second) {
//            second = height[j];
//        }
//
//        if (height[i] < height[j]) {
//            i++;
//        }
//        else {
//            j--;
//        }
//    }
//
//    return max_area;
//}
//
//
//int main()
//{
//	system("pause");
//	return 0;
//}