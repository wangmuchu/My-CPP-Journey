#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // 1. 准备你的词库（你可以随时往里面加单词）
    vector<string> words = {"abandon (放弃)", "ability (能力)", "absorb (吸收)", "academic (学术的)", "access (通道/进入)", "accommodate (容纳)", "accompany (陪伴)", "accomplish (完成)", "accurate (准确的)", "accuse (指控)"};
    
    // 2. 初始化随机数种子（保证每次抽背的顺序不一样）
    srand(time(0));
    
    cout << "======================================" << endl;
    cout << "   欢迎使用 Claire 的四级抽背神器！" << endl;
    cout << "   输入 'q' 退出，输入其他任意键继续" << endl;
    cout << "======================================" << endl;

    char choice;
    
    // 3. 开始循环抽背
    while (true) {
        // 随机抽取一个单词的下标
        int randomIndex = rand() % words.size();
        
        cout << "\n👉 请翻译这个单词: 【 " << words[randomIndex] << " 】" << endl;
        cout << "按回车键看下一个，输入 q 退出..." << endl;
        
        // 读取用户输入
        cin >> choice;
        
        // 如果输入了 q，就退出循环
        if (choice == 'q' || choice == 'Q') {
            cout << "\n太棒了，今天又背了几个单词！去休息吧~" << endl;
            break;
        }
    }

    return 0;
}
