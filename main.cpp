#include "CivetServer.h"
#include <iostream>

int main() {
    const char *options[] = {
        "document_root", "./", // Папка с HTML файлами
        "port", "8080", // Порт, на котором будет работать сервер
        nullptr
    };

    CivetServer server(options);
    std::cout << "Сервер запущен на http://localhost:8080" << std::endl;

    // Бесконечный цикл для поддержания работы сервера
    while (true) {
        // Здесь можно добавить дополнительные действия или логику
    }

    return 0;
}