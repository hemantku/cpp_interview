#!/usr/bin/env python

def count_streak(file_string):
    bitmap = []
    total_list = file_string.split("\n")
    total_list.remove('')
    print total_list
    for item in total_list:
        item_list = item.split(",")
        total_cal = int(item_list[0])
        br = int(item_list[1])
        lu = int(item_list[2])
        d = int(item_list[3])
        total = br + lu + d
        #print total
        if total_cal >= total:
            bitmap.append(1)
        else:
            bitmap.append(0)
    print bitmap
    count_rep(bitmap)
    
def count_rep(bitmap):
    if bitmap == []:
        return None
    count_new = []
    count_old = []
    for item in bitmap:
        if item == 1:
            count_new.append(item)
        else:
            if len(count_new) > len(count_old):
                count_old = count_new
            count_new=[]
    print len(count_old)
        
if __name__ == '__main__':
    fh = open("testfile.txt", "r")
    file_string = fh.read()
    if len(file_string):
        count_streak(file_string)
    else:
        print "File Empty"
    fh.close()

