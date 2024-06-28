//같은숫자는 싫어
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    // 값저장용
    int Save = arr[0];
   
    // answer에 for로 돌면서 배열을 차곡차곡 쌓는다.( 연속되는 중복되는 값을 확인하면서 )
    // j는 중복됬는지 j가 0이 아니면 중복
    for (int i = 0, j=0; i < arr.size(); ++i)
    {
        //중복이라면
        if (Save == arr[i])
        {
            Save = arr[i];
            j++;
        }
        else
        {
            // 중복 체크를 초기화하고
            j = 0;
            //전 i의 Save값을 넣고 새로운 Save값= arr[i]을 넣는다
            answer.push_back(Save);
            Save = arr[i];
        }
    }
    // 마지막값을 넣어준다.
    answer.push_back(arr[arr.size() - 1]);
    return answer;
}

int main()
{
    // 원소는 0~9 사이의 숫자
    vector<int> arr = { 4,4,4,3,3 };
    vector<int> answer = solution(arr);
    for(int i=0;i<answer.size();++i)
        cout << answer[i] << endl;
    return 0;
}