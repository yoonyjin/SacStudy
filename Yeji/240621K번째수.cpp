//�������ڴ� �Ⱦ�
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    // �������
    int Save = arr[0];
   
    // answer�� for�� ���鼭 �迭�� �������� �״´�.( ���ӵǴ� �ߺ��Ǵ� ���� Ȯ���ϸ鼭 )
    // j�� �ߺ������ j�� 0�� �ƴϸ� �ߺ�
    for (int i = 0, j=0; i < arr.size(); ++i)
    {
        //�ߺ��̶��
        if (Save == arr[i])
        {
            Save = arr[i];
            j++;
        }
        else
        {
            // �ߺ� üũ�� �ʱ�ȭ�ϰ�
            j = 0;
            //�� i�� Save���� �ְ� ���ο� Save��= arr[i]�� �ִ´�
            answer.push_back(Save);
            Save = arr[i];
        }
    }
    // ���������� �־��ش�.
    answer.push_back(arr[arr.size() - 1]);
    return answer;
}

int main()
{
    // ���Ҵ� 0~9 ������ ����
    vector<int> arr = { 4,4,4,3,3 };
    vector<int> answer = solution(arr);
    for(int i=0;i<answer.size();++i)
        cout << answer[i] << endl;
    return 0;
}