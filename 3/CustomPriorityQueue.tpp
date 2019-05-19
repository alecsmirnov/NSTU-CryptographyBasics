#include "CustomPriorityQueue.h"

// ���������� ���� �������� � ����:
// ������ �������� �������� �� �����, �������� �������� �������� �����
template<typename T, typename Compare>
T custom_priority_queue<T, Compare>::peek() {
	T top = this->top();		
	this->pop();

	return top;
}