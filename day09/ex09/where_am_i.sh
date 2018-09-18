IPS='ifconfig | grep "inet " | cut -d' ' -f 2 | awk '{if ($0 != "127.0.0.1") print }'
