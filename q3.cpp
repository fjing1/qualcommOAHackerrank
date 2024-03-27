#include <vector>
#include <algorithm>

int maxMeetings(std::vector<int>& effectiveness) {
    // Sort the vector in descending order
    std::sort(effectiveness.begin(), effectiveness.end(), std::greater<int>());

    long sum = 0; //wont pass some cases if int, need to be long, as the number are many and big
    int count = 0;

    // Add the values from large to small and to negative
    for (int i = 0; i < effectiveness.size(); i++) {
        sum += effectiveness[i];
        if (sum < 0) {
            // When the sum is less than 0, return the number of total elements
            return count;
        }
        count++;
    }

    return count;
}
