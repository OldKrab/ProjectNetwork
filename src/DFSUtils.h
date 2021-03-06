#pragma once
#include <map>
#include <vector>

class DFSUtils
{
public:
	DFSUtils(std::map<int, std::vector<int>> adj);
	std::vector<int> FindCycle();
	std::vector<std::vector<int>> FindAllPaths(int startEvent);
private:
	bool FindCycleRec(int v);
	std::vector<std::vector<int>> FindAllPathsRec(int v);
	void Clear();

	enum class Color
	{
		White, Gray, Black
	};
	
	std::map<int, std::vector<int>> adj;
	std::map<int, Color> color;
	std::map<int, int> parent;
	int cycleStart;
};
