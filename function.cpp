#include "function.h"

void myarray(int arr[], const int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
}

void print(int arr[], const int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int min(int arr[], const int size) {
	int min = arr[0];
	for (int i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	return min;
}

int max(int arr[], const int size) {
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}

void showInt(int arr[], const int size) {
	int choice;
	cout << "Enter 1 to edit the array, 2 to sort the array: ";
	cin >> choice;
	switch (choice) {
	case 1:
		int index;
		int value;
		cout << "Enter the index of the element you want to edit: ";
		cin >> index;
		cout << "Enter the value of the element you want to edit: ";
		cin >> value;
		arr[index] = value;
		break;
	case 2:
		int temp;
		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - i - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					temp = arr[j + 1];
					arr[j + 1] = arr[j];
					arr[j] = temp;
				}
			}
		}
		break;
	default:
		cout << "Error!" << endl;
		break;
	}
}

void myarray(double arr[], const int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100 / 10.0;
	}
}

void print(double arr[], const int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

double min(double arr[], const int size) {
	double min = arr[0];
	for (int i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	return min;
}

double max(double arr[], const int size) {
	double max = arr[0];
	for (int i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}

void showDouble(double arr[], const int size) {
	int choice;
	cout << "Enter 1 to edit the array, 2 to sort the array: ";
	cin >> choice;
	switch (choice) {
	case 1:
		int index;
		double value;
		cout << "Enter the index of the element you want to edit: ";
		cin >> index;
		cout << "Enter the value of the element you want to edit: ";
		cin >> value;
		arr[index] = value;
		break;
	case 2:
		double temp;
		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - i - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					temp = arr[j + 1];
					arr[j + 1] = arr[j];
					arr[j] = temp;
				}
			}
		}
		break;
	default:
		cout << "Error!" << endl;
		break;
	}
}

void myarray(char arr[], const int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 26 + 97;
	}
}

void print(char arr[], const int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

char min(char arr[], const int size) {
	char min = arr[0];
	for (int i = 0; i < size; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	return min;
}

char max(char arr[], const int size) {
	char max = arr[0];
	for (int i = 0; i < size; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
	}
	return max;
}

void showChar(char arr[], const int size) {
	int choice;
	cout << "Enter 1 to edit the array, 2 to sort the array: ";
	cin >> choice;
	switch (choice) {
	case 1:
		int index;
		char value;
		cout << "Enter the index of the element you want to edit: ";
		cin >> index;
		cout << "Enter the value of the element you want to edit: ";
		cin >> value;
		arr[index] = value;
		break;
	case 2:
		char temp;
		for (int i = 0; i < size - 1; i++) {
			for (int j = 0; j < size - i - 1; j++) {
				if (arr[j] > arr[j + 1]) {
					temp = arr[j + 1];
					arr[j + 1] = arr[j];
					arr[j] = temp;
				}
			}
		}
		break;
	default:
		cout << "Error!" << endl;
		break;
	}
}