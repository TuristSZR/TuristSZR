#include "CivetServer.h"
#include <iostream>

int main() {
    const char *options[] = {
        "document_root", "./", // ����� � HTML �������
        "port", "8080", // ����, �� ������� ����� �������� ������
        nullptr
    };

    CivetServer server(options);
    std::cout << "������ ������� �� http://localhost:8080" << std::endl;

    // ����������� ���� ��� ����������� ������ �������
    while (true) {
        // ����� ����� �������� �������������� �������� ��� ������
    }

    return 0;
}