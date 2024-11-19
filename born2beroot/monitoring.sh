#!/bin/bash

ARCHI=$(uname -a)
CPU=$(grep "physical id" /proc/cpuinfo | sort -u | wc -l)
VCPU=$(grep "processor" /proc/cpuinfo | wc -l)
RAM_TOTAL=$(free --mega | awk '$1 == "Mem:" {print $2}')
RAM_USED=$(free --mega | awk '$1 == "Mem:" {print $3}')
RAM_PERCENT=$(free --mega | awk '$1 == "Mem:" {printf("%.2f"), $3/$2*100}')
DISK_TOTAL=$(df -h --total | grep total | awk '{print $?}')
DISK_USEDL=$(df -h --total | grep total | awk '{print $?}')
DISK_PERCENT=$(df -h --total | grep total | awk '{print $?}')

wall "
    # Architecture: $ARCHI
    # Number of physical CPUs: $CPU
    # Number of virtual CPUs: $VCPU
    # Memort usage: $RAM_USED / $RAM_TOTAL MB ($RAM_PERCENT)
    # Disk usage: $DISK_USED / $DISK_TOTAL GB ($DISK_PERCENT)
    # CPU load:
    # Last reboot:
    # LVM use:
    # Number of active connections:
    # Logged users:
    # Nerwork:
    # Sudo commands: 
    "