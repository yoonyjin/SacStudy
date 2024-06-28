//K��°��
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
//�迭�� �迭 ->2����
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    // 3���� �� ����
    int one, two, three;
    for (int i = 0; i < commands.size(); ++i)
    {
        // ���°����(�ε���
        one = commands[i][0] - 1;
        // ���°����
        two = commands[i][1];
        // ���ĵ� �迭�� ���°(�ε���)
        three = commands[i][2]-1;

        //�������� ���ο� Save�� �ʿ��ؼ� ���⼭ ����
        vector<int> Save;
        for (int i = one; i < two; ++i)
        {
           Save.push_back(array[i]);
        }
        sort(Save.begin(), Save.end());
        answer.push_back(Save[three]);
    }
   
    return answer;
}

int main()
{
    vector<int> arr = { 1,5,2,6,3,7,4};
    vector<vector<int>> commands = { {2, 5, 3 }, {4, 4, 1},{1, 7, 3} };
    vector<int> answer = solution(arr,commands);
    for (int i = 0; i < answer.size(); ++i)
        cout << answer[i] << endl;
    return 0;
}