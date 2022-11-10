    #include <iostream>

    int main() {
    int n, m;
    std::string action;
    std::cin >> n >> m;
    int tabs = n;
    for (int i = 0; i < m; i++) {
        std::cin >> action;
        (action == "clicou") ? tabs -= 1 : tabs += 1;
    }
    std::cout << tabs << std::endl;
    return 0;
    }
