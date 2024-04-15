#pragma once
#include <string>
#include <iostream>
#include <map>

class Builder {
protected:
	std::string name;
	std::string specialization;
	int numBuilt;
public:

	Builder(const std::string& name, const std::string& specialization)
		: name(name), specialization(specialization), numBuilt(0) {}

	virtual void build();

	virtual void getInfo() const;

	virtual ~Builder() {}

};

class ResidentialBuilder :public Builder {
private:
	std::map<std::string, int> houseTypes;
public:

	ResidentialBuilder(const std::string& name)
		: Builder(name, "Residential") {}

	void build() override;

	void addHouseType(const std::string& type);

	void getInfo() const override;

};

class CommercialBuilder : public Builder {
private:
	std::map<std::string, int> commercialTypes;
public:

	CommercialBuilder(const std::string& name)
		: Builder(name, "Commercial") {}

	void build() override;

	void addCommercialType(const std::string& type);

	void getInfo() const override;

};

class IndustrialBuilder : public Builder {
private:
	std::map<std::string, int> industrialTypes;
public:

	IndustrialBuilder(const std::string& name)
		: Builder(name, "Industrial") {}

	void build() override;

	void addIndustrialType(const std::string& type);

	void getInfo() const override;

};