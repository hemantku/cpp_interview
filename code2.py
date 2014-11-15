#!/usr/bin/env python
leaderboard = {}

def updateLeaderBoard(country,userid,weight):
    total = 0
    if country in leaderboard:
        leaderboard[country][userid] = weight
    else:
        leaderboard[country]={}
        leaderboard[country][userid] = weight
    for key in leaderboard:
        for user in leaderboard[key]:
          total = total + leaderboard[key][user]
    print leaderboard[key]
    print total
       


if __name__ == '__main__':
    updateLeaderBoard('US', 123, 175.5)
    updateLeaderBoard('DE', 444, 203.0) 
    updateLeaderBoard('GB', 555, 164.5)
    updateLeaderBoard('US', 123, 171.5) 
    updateLeaderBoard('DE', 444, 202.0) 
    updateLeaderBoard('GB', 555, 164.0)
    updateLeaderBoard('US', 124, 171.5) 
