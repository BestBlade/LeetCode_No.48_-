/*------------------------------------------------------------------|
给定一个 n × n 的二维矩阵表示一个图像。

将图像顺时针旋转 90 度。

说明：

你必须在原地旋转图像，这意味着你需要直接修改输入的二维矩阵。请不要使用另一个矩阵来旋转图像。

示例 1:

给定 matrix =
[
  [1,2,3],
  [4,5,6],
  [7,8,9]
],

原地旋转输入矩阵，使其变为:
[
  [7,4,1],
  [8,5,2],
  [9,6,3]
]
示例 2:

给定 matrix =
[
  [ 5, 1, 9,11],
  [ 2, 4, 8,10],
  [13, 3, 6, 7],
  [15,14,12,16]
],

原地旋转输入矩阵，使其变为:
[
  [15,13, 2, 5],
  [14, 3, 4, 1],
  [12, 6, 8, 9],
  [16, 7,10,11]
]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/rotate-image
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。|
-------------------------------------------------------------------*/

/*	旋转四角
*
*	执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
*	内存消耗：6.9 MB, 在所有 C++ 提交中击败了88.68%的用户
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <map>

using namespace std;

void rotate(vector<vector<int>>& matrix)
{
	size_t len = matrix.size();
	for (int i = 0; i <= len / 2; i++)
	{
		for (int j = i; j < len - 1 - i; j++)
		{
			//	先交换对角
			swap(matrix[i][j], matrix[len - 1 - i][len - 1 - j]);
			//再交换两竖边
			swap(matrix[j][len - 1 - i], matrix[len - 1 - i][len - 1 - j]);
			swap(matrix[len - 1 - j][i], matrix[i][j]);
		}
	}
	return;
}

int main()
{
	vector<vector<int>> matrix = { {5, 1, 9,11} ,{ 2, 4, 8,10},{13, 3, 6, 7},{15,14,12,16} };
	rotate(matrix);
}