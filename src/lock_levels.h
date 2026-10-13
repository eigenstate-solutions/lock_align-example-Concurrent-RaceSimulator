/**
 @file
 @author Patrick Stein <patrick@eigenstate.solutions>
 @date 10/13/2026
 @section Lock levels used by lock_align library https://github.com/eigenstate-solutions/lock_align/
*/

#ifndef LOCK_LEVELS_H
#define LOCK_LEVELS_H

enum class lock_level {
    none = 0,
    master = 1,
    racer = 2,
    queue_obligation = 3,
    queue = 4,
    finish = 4,
    io = 5
};

#endif
