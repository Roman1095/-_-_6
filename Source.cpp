#include <iostream>
#include "Header.h"

void Builder::build() {
	std::cout << "Builder " << name << " is building something." << std::endl;
	numBuilt++;
}

void Builder::getInfo() const {
	std::cout << "Builder: " << name << std::endl;
	std::cout << "Specialization: " << specialization << std::endl;
	std::cout << "Number of built objects: " << numBuilt << std::endl;
}

void ResidentialBuilder::build() {
	std::cout << "Residential builder " << name << " is building houses." << std::endl;
	numBuilt++;
}

void ResidentialBuilder::addHouseType(const std::string& type) {
	houseTypes[type]++;
}

void ResidentialBuilder::getInfo() const {
	Builder::getInfo();
	std::cout << "House Types:" << std::endl;
	for (const auto& pair : houseTypes) {
		std::cout << "- " << pair.first << ": " << pair.second << std::endl;
	}
}

void CommercialBuilder::build() {
	std::cout << "Commercial builder " << name << " is building offices." << std::endl;
	numBuilt++;
}

void CommercialBuilder::addCommercialType(const std::string& type) {
	commercialTypes[type]++;
}

void CommercialBuilder::getInfo() const {
	Builder::getInfo();
	std::cout << "Commercial Types:" << std::endl;
	for (const auto& pair : commercialTypes) {
		std::cout << "- " << pair.first << ": " << pair.second << std::endl;
	}
}

void IndustrialBuilder::build() {
	std::cout << "Industrial builder " << name << " is building factories." << std::endl;
	numBuilt++;
}

void IndustrialBuilder::addIndustrialType(const std::string& type) {
	industrialTypes[type]++;
}

void IndustrialBuilder::getInfo() const {
	Builder::getInfo();
	std::cout << "Industrial Types:" << std::endl;
	for (const auto& pair : industrialTypes) {
		std::cout << "- " << pair.first << ": " << pair.second << std::endl;
	}
}