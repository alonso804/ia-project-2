#include "Iris.h"
#include "DecisionTree.h"
#include "CSVReader.h"

int main(int argc, char *argv[]) {
	/*
	auto features = CSVReader<Iris>::read("iris.csv");

	for (auto f : features) {
		cout << f << endl;
	}
	*/

	auto decisionTree = DecisionTree("gender_classification.csv",3,3);
	decisionTree.print();
	return 0;
}
