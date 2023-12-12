#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int>& arr1, int listSize) {
    	bool changed = true;
    	do {
    		changed = false;
    		for (int j = 0; j< listSize - 1; j++) {
    			if (arr1[j] > arr1[j + 1]) {
    				swap(arr1[j], arr1[j +1]); changed = true;
    			}
    		}
    
    	} while (changed);
    	
    }
vector<int> mergeArrays( vector<int>& arr1,  vector<int>& arr2) {
    vector<int> mergedArr;
    int size1 = arr1.size();
    int size2 = arr2.size();
    int i = 0, j = 0;

    
    while (i < size1) {
        bubbleSort(arr1, size1);
        mergedArr.push_back(arr1[i]);
        i++;
    }

    while (j < size2) {
        bubbleSort(arr2, size2);
        mergedArr.push_back(arr2[j]);
        j++;
    }
    bubbleSort(mergedArr, mergedArr.size());
    return mergedArr;
}

int main() {
    int n1, n2;

    // 输入第一个已排序数组
    std::cout << "Enter the size of the first sorted array: ";
    std::cin >> n1;

    std::vector<int> arr1(n1);
    std::cout << "Enter the elements of the first sorted array: ";
    for (int i = 0; i < n1; i++) {
        std::cin >> arr1[i];
    }

    // 输入第二个已排序数组
    std::cout << "Enter the size of the second sorted array: ";
    std::cin >> n2;

    std::vector<int> arr2(n2);
    std::cout << "Enter the elements of the second sorted array: ";
    for (int i = 0; i < n2; i++) {
        std::cin >> arr2[i];
    }

    // 合并两个已排序数组
    std::vector<int> mergedArray1 = mergeArrays(arr1, arr2);

    // 输出合并后的数组
    std::cout << "Merged sorted array1: ";
    for (int num : arr1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << "Merged sorted array2: ";
    for (int num : arr2) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << "Merged sorted array3: ";
    for (int num : mergedArray1) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
