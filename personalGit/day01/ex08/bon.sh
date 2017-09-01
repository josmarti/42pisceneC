ldapsearch -x -LLL "sn=*bon*" | grep sn | wc -l | cut -c 8-
