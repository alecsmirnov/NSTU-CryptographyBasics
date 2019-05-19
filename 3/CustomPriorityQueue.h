#ifndef CUSTOMPRIORITYQUEUE_H
#define CUSTOMPRIORITYQUEUE_H

#include <queue>

// ������������ �� ������ �� ����������� ���������� ����
// ���������� ��� ����, ����� ���������� ��� ��������:
// ������ �������� �������� �� �����, �������� �������� �������� �����, � ����
template<typename T, typename Compare>
class custom_priority_queue : public std::priority_queue<T, std::vector<T>, Compare> {
public:
	T peek();
};

#include "CustomPriorityQueue.tpp"

#endif