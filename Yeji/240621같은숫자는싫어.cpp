//K번째수
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
//배열의 배열 ->2차원
vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    // 3개의 각 원소
    int one, two, three;
    for (int i = 0; i < commands.size(); ++i)
    {
        // 몇번째부터(인덱스
        one = commands[i][0] - 1;
        // 몇번째까지
        two = commands[i][1];
        // 정렬된 배열의 몇번째(인덱스)
        three = commands[i][2]-1;

        //돌때마다 새로운 Save가 필요해서 여기서 선언
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