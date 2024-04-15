#include "Header.h"

int main() {
    // Создаем экземпляры застройщиков различных специализаций
    ResidentialBuilder residentialBuilder("John");
    CommercialBuilder commercialBuilder("Smith");
    IndustrialBuilder industrialBuilder("Doe");

    // Строим объекты различных типов с помощью каждого застройщика
    residentialBuilder.build();
    residentialBuilder.addHouseType("Cottage");
    residentialBuilder.addHouseType("Apartment");
    residentialBuilder.addHouseType("Townhouse");

    commercialBuilder.build();
    commercialBuilder.addCommercialType("Office Building");
    commercialBuilder.addCommercialType("Shopping Mall");
    commercialBuilder.addCommercialType("Hotel");

    industrialBuilder.build();
    industrialBuilder.addIndustrialType("Factory");
    industrialBuilder.addIndustrialType("Warehouse");
    industrialBuilder.addIndustrialType("Processing Plant");

    // Выводим информацию о каждом застройщике
    std::cout << "Residential Builder Info:" << std::endl;
    residentialBuilder.getInfo();
    std::cout << std::endl;

    std::cout << "Commercial Builder Info:" << std::endl;
    commercialBuilder.getInfo();
    std::cout << std::endl;

    std::cout << "Industrial Builder Info:" << std::endl;
    industrialBuilder.getInfo();
    std::cout << std::endl;

    return 0;
}