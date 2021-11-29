//
// Created by Nikola Vugdelija on 29/11/2021.
//
/*
 You are playing a simplified PAC-MAN game on an infinite 2-D grid.
 You start at the point [0, 0], and you are given a destination point target = [xtarget, ytarget] that you are
 trying to get to. There are several ghosts on the map with their starting positions given as a 2D array ghosts,
 where ghosts[i] = [xi, yi] represents the starting position of the ith ghost. All inputs are integral coordinates.

 Each turn, you and all the ghosts may independently choose to either move 1 unit
 in any of the four cardinal directions: north, east, south, or west, or stay still. All actions happen simultaneously.

 You escape if and only if you can reach the target before any ghost reaches you.
 If you reach any square (including the target) at the same time as a ghost, it does not count as an escape.

 Return true if it is possible to escape regardless of how the ghosts move, otherwise return false.
 */

#include <vector>
#include <stdlib.h>

using namespace std;

class Solution {
public:
    bool escapeGhosts(vector<vector<int>> &ghosts, vector<int> &target) {
        int min_number_of_moves = abs(target[0]) + abs(target[1]);
        int num_of_ghosts = ghosts.size();
        for (int i = 0; i < num_of_ghosts; ++i) {
            int x_distance = abs(ghosts[i][0] - target[0]);
            int y_distance = abs(ghosts[i][1] - target[1]);
            if(x_distance + y_distance <= min_number_of_moves)
                return false;
        }
        return true;
    }
};