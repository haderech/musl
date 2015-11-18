#define __NR_io_setup 0
#define __NR_io_destroy 1
#define __NR_io_submit 2
#define __NR_io_cancel 3
#define __NR_io_getevents 4
#define __NR_setxattr 5
#define __NR_lsetxattr 6
#define __NR_fsetxattr 7
#define __NR_getxattr 8
#define __NR_lgetxattr 9
#define __NR_fgetxattr 10
#define __NR_listxattr 11
#define __NR_llistxattr 12
#define __NR_flistxattr 13
#define __NR_removexattr 14
#define __NR_lremovexattr 15
#define __NR_fremovexattr 16
#define __NR_getcwd 17
#define __NR_lookup_dcookie 18
#define __NR_eventfd2 19
#define __NR_epoll_create1 20
#define __NR_epoll_ctl 21
#define __NR_epoll_pwait 22
#define __NR_dup 23
#define __NR_dup3 24
#define __NR_fcntl64 25
#define __NR_inotify_init1 26
#define __NR_inotify_add_watch 27
#define __NR_inotify_rm_watch 28
#define __NR_ioctl 29
#define __NR_ioprio_set 30
#define __NR_ioprio_get 31
#define __NR_flock 32
#define __NR_mknodat 33
#define __NR_mkdirat 34
#define __NR_unlinkat 35
#define __NR_symlinkat 36
#define __NR_linkat 37
#define __NR_renameat 38
#define __NR_umount2 39
#define __NR_mount 40
#define __NR_pivot_root 41
#define __NR_nfsservctl 42
#define __NR_statfs64 43
#define __NR_fstatfs64 44
#define __NR_truncate64 45
#define __NR_ftruncate64 46
#define __NR_fallocate 47
#define __NR_faccessat 48
#define __NR_chdir 49
#define __NR_fchdir 50
#define __NR_chroot 51
#define __NR_fchmod 52
#define __NR_fchmodat 53
#define __NR_fchownat 54
#define __NR_fchown 55
#define __NR_openat 56
#define __NR_close 57
#define __NR_vhangup 58
#define __NR_pipe2 59
#define __NR_quotactl 60
#define __NR_getdents64 61
#define __NR__llseek 62
#define __NR_read 63
#define __NR_write 64
#define __NR_readv 65
#define __NR_writev 66
#define __NR_pread64 67
#define __NR_pwrite64 68
#define __NR_preadv 69
#define __NR_pwritev 70
#define __NR_sendfile64 71
#define __NR_pselect6 72
#define __NR_ppoll 73
#define __NR_signalfd4 74
#define __NR_vmsplice 75
#define __NR_splice 76
#define __NR_tee 77
#define __NR_readlinkat 78
#define __NR_fstatat64 79
#define __NR_fstat64 80
#define __NR_sync 81
#define __NR_fsync 82
#define __NR_fdatasync 83
#define __NR_sync_file_range 84
#define __NR_timerfd_create 85
#define __NR_timerfd_settime 86
#define __NR_timerfd_gettime 87
#define __NR_utimensat 88
#define __NR_acct 89
#define __NR_capget 90
#define __NR_capset 91
#define __NR_personality 92
#define __NR_exit 93
#define __NR_exit_group 94
#define __NR_waitid 95
#define __NR_set_tid_address 96
#define __NR_unshare 97
#define __NR_futex 98
#define __NR_set_robust_list 99
#define __NR_get_robust_list 100
#define __NR_nanosleep 101
#define __NR_getitimer 102
#define __NR_setitimer 103
#define __NR_kexec_load 104
#define __NR_init_module 105
#define __NR_delete_module 106
#define __NR_timer_create 107
#define __NR_timer_gettime 108
#define __NR_timer_getoverrun 109
#define __NR_timer_settime 110
#define __NR_timer_delete 111
#define __NR_clock_settime 112
#define __NR_clock_gettime 113
#define __NR_clock_getres 114
#define __NR_clock_nanosleep 115
#define __NR_syslog 116
#define __NR_ptrace 117
#define __NR_sched_setparam 118
#define __NR_sched_setscheduler 119
#define __NR_sched_getscheduler 120
#define __NR_sched_getparam 121
#define __NR_sched_setaffinity 122
#define __NR_sched_getaffinity 123
#define __NR_sched_yield 124
#define __NR_sched_get_priority_max 125
#define __NR_sched_get_priority_min 126
#define __NR_sched_rr_get_interval 127
#define __NR_restart_syscall 128
#define __NR_kill 129
#define __NR_tkill 130
#define __NR_tgkill 131
#define __NR_sigaltstack 132
#define __NR_rt_sigsuspend 133
#define __NR_rt_sigaction 134
#define __NR_rt_sigprocmask 135
#define __NR_rt_sigpending 136
#define __NR_rt_sigtimedwait 137
#define __NR_rt_sigqueueinfo 138
#define __NR_rt_sigreturn 139
#define __NR_setpriority 140
#define __NR_getpriority 141
#define __NR_reboot 142
#define __NR_setregid 143
#define __NR_setgid 144
#define __NR_setreuid 145
#define __NR_setuid 146
#define __NR_setresuid 147
#define __NR_getresuid 148
#define __NR_setresgid 149
#define __NR_getresgid 150
#define __NR_setfsuid 151
#define __NR_setfsgid 152
#define __NR_times 153
#define __NR_setpgid 154
#define __NR_getpgid 155
#define __NR_getsid 156
#define __NR_setsid 157
#define __NR_getgroups 158
#define __NR_setgroups 159
#define __NR_uname 160
#define __NR_sethostname 161
#define __NR_setdomainname 162
#define __NR_getrlimit 163
#define __NR_setrlimit 164
#define __NR_getrusage 165
#define __NR_umask 166
#define __NR_prctl 167
#define __NR_getcpu 168
#define __NR_gettimeofday 169
#define __NR_settimeofday 170
#define __NR_adjtimex 171
#define __NR_getpid 172
#define __NR_getppid 173
#define __NR_getuid 174
#define __NR_geteuid 175
#define __NR_getgid 176
#define __NR_getegid 177
#define __NR_gettid 178
#define __NR_sysinfo 179
#define __NR_mq_open 180
#define __NR_mq_unlink 181
#define __NR_mq_timedsend 182
#define __NR_mq_timedreceive 183
#define __NR_mq_notify 184
#define __NR_mq_getsetattr 185
#define __NR_msgget 186
#define __NR_msgctl 187
#define __NR_msgrcv 188
#define __NR_msgsnd 189
#define __NR_semget 190
#define __NR_semctl 191
#define __NR_semtimedop 192
#define __NR_semop 193
#define __NR_shmget 194
#define __NR_shmctl 195
#define __NR_shmat 196
#define __NR_shmdt 197
#define __NR_socket 198
#define __NR_socketpair 199
#define __NR_bind 200
#define __NR_listen 201
#define __NR_accept 202
#define __NR_connect 203
#define __NR_getsockname 204
#define __NR_getpeername 205
#define __NR_sendto 206
#define __NR_recvfrom 207
#define __NR_setsockopt 208
#define __NR_getsockopt 209
#define __NR_shutdown 210
#define __NR_sendmsg 211
#define __NR_recvmsg 212
#define __NR_readahead 213
#define __NR_brk 214
#define __NR_munmap 215
#define __NR_mremap 216
#define __NR_add_key 217
#define __NR_request_key 218
#define __NR_keyctl 219
#define __NR_clone 220
#define __NR_execve 221
#define __NR_mmap2 222
#define __NR_fadvise64_64 223
#define __NR_swapon 224
#define __NR_swapoff 225
#define __NR_mprotect 226
#define __NR_msync 227
#define __NR_mlock 228
#define __NR_munlock 229
#define __NR_mlockall 230
#define __NR_munlockall 231
#define __NR_mincore 232
#define __NR_madvise 233
#define __NR_remap_file_pages 234
#define __NR_mbind 235
#define __NR_get_mempolicy 236
#define __NR_set_mempolicy 237
#define __NR_migrate_pages 238
#define __NR_move_pages 239
#define __NR_rt_tgsigqueueinfo 240
#define __NR_perf_event_open 241
#define __NR_accept4 242
#define __NR_recvmmsg 243
#define __NR_or1k_atomic 244
#define __NR_wait4 260
#define __NR_prlimit64 261
#define __NR_fanotify_init 262
#define __NR_fanotify_mark 263
#define __NR_name_to_handle_at 264
#define __NR_open_by_handle_at 265
#define __NR_clock_adjtime 266
#define __NR_syncfs 267
#define __NR_setns 268
#define __NR_sendmmsg 269
#define __NR_process_vm_readv 270
#define __NR_process_vm_writev 271
#define __NR_kcmp 272
#define __NR_finit_module 273
#define __NR_sched_setattr 274
#define __NR_sched_getattr 275
#define __NR_renameat2 276
#define __NR_seccomp 277
#define __NR_getrandom 278
#define __NR_memfd_create 279
#define __NR_bpf 280
#define __NR_execveat 281
#define __NR_userfaultfd 282
#define __NR_membarrier 283

#define SYS_io_setup __NR_io_setup
#define SYS_io_destroy __NR_io_destroy
#define SYS_io_submit __NR_io_submit
#define SYS_io_cancel __NR_io_cancel
#define SYS_io_getevents __NR_io_getevents
#define SYS_setxattr __NR_setxattr
#define SYS_lsetxattr __NR_lsetxattr
#define SYS_fsetxattr __NR_fsetxattr
#define SYS_getxattr __NR_getxattr
#define SYS_lgetxattr __NR_lgetxattr
#define SYS_fgetxattr __NR_fgetxattr
#define SYS_listxattr __NR_listxattr
#define SYS_llistxattr __NR_llistxattr
#define SYS_flistxattr __NR_flistxattr
#define SYS_removexattr __NR_removexattr
#define SYS_lremovexattr __NR_lremovexattr
#define SYS_fremovexattr __NR_fremovexattr
#define SYS_getcwd __NR_getcwd
#define SYS_lookup_dcookie __NR_lookup_dcookie
#define SYS_eventfd2 __NR_eventfd2
#define SYS_epoll_create1 __NR_epoll_create1
#define SYS_epoll_ctl __NR_epoll_ctl
#define SYS_epoll_pwait __NR_epoll_pwait
#define SYS_dup __NR_dup
#define SYS_dup3 __NR_dup3
#define SYS_fcntl64 __NR_fcntl64
#define SYS_inotify_init1 __NR_inotify_init1
#define SYS_inotify_add_watch __NR_inotify_add_watch
#define SYS_inotify_rm_watch __NR_inotify_rm_watch
#define SYS_ioctl __NR_ioctl
#define SYS_ioprio_set __NR_ioprio_set
#define SYS_ioprio_get __NR_ioprio_get
#define SYS_flock __NR_flock
#define SYS_mknodat __NR_mknodat
#define SYS_mkdirat __NR_mkdirat
#define SYS_unlinkat __NR_unlinkat
#define SYS_symlinkat __NR_symlinkat
#define SYS_linkat __NR_linkat
#define SYS_renameat __NR_renameat
#define SYS_umount2 __NR_umount2
#define SYS_mount __NR_mount
#define SYS_pivot_root __NR_pivot_root
#define SYS_nfsservctl __NR_nfsservctl
#define SYS_statfs64 __NR_statfs64
#define SYS_fstatfs64 __NR_fstatfs64
#define SYS_truncate64 __NR_truncate64
#define SYS_ftruncate64 __NR_ftruncate64
#define SYS_fallocate __NR_fallocate
#define SYS_faccessat __NR_faccessat
#define SYS_chdir __NR_chdir
#define SYS_fchdir __NR_fchdir
#define SYS_chroot __NR_chroot
#define SYS_fchmod __NR_fchmod
#define SYS_fchmodat __NR_fchmodat
#define SYS_fchownat __NR_fchownat
#define SYS_fchown __NR_fchown
#define SYS_openat __NR_openat
#define SYS_close __NR_close
#define SYS_vhangup __NR_vhangup
#define SYS_pipe2 __NR_pipe2
#define SYS_quotactl __NR_quotactl
#define SYS_getdents64 __NR_getdents64
#define SYS__llseek __NR__llseek
#define SYS_read __NR_read
#define SYS_write __NR_write
#define SYS_readv __NR_readv
#define SYS_writev __NR_writev
#define SYS_pread64 __NR_pread64
#define SYS_pwrite64 __NR_pwrite64
#define SYS_preadv __NR_preadv
#define SYS_pwritev __NR_pwritev
#define SYS_sendfile64 __NR_sendfile64
#define SYS_pselect6 __NR_pselect6
#define SYS_ppoll __NR_ppoll
#define SYS_signalfd4 __NR_signalfd4
#define SYS_vmsplice __NR_vmsplice
#define SYS_splice __NR_splice
#define SYS_tee __NR_tee
#define SYS_readlinkat __NR_readlinkat
#define SYS_fstatat64 __NR_fstatat64
#define SYS_fstat64 __NR_fstat64
#define SYS_sync __NR_sync
#define SYS_fsync __NR_fsync
#define SYS_fdatasync __NR_fdatasync
#define SYS_sync_file_range __NR_sync_file_range
#define SYS_timerfd_create __NR_timerfd_create
#define SYS_timerfd_settime __NR_timerfd_settime
#define SYS_timerfd_gettime __NR_timerfd_gettime
#define SYS_utimensat __NR_utimensat
#define SYS_acct __NR_acct
#define SYS_capget __NR_capget
#define SYS_capset __NR_capset
#define SYS_personality __NR_personality
#define SYS_exit __NR_exit
#define SYS_exit_group __NR_exit_group
#define SYS_waitid __NR_waitid
#define SYS_set_tid_address __NR_set_tid_address
#define SYS_unshare __NR_unshare
#define SYS_futex __NR_futex
#define SYS_set_robust_list __NR_set_robust_list
#define SYS_get_robust_list __NR_get_robust_list
#define SYS_nanosleep __NR_nanosleep
#define SYS_getitimer __NR_getitimer
#define SYS_setitimer __NR_setitimer
#define SYS_kexec_load __NR_kexec_load
#define SYS_init_module __NR_init_module
#define SYS_delete_module __NR_delete_module
#define SYS_timer_create __NR_timer_create
#define SYS_timer_gettime __NR_timer_gettime
#define SYS_timer_getoverrun __NR_timer_getoverrun
#define SYS_timer_settime __NR_timer_settime
#define SYS_timer_delete __NR_timer_delete
#define SYS_clock_settime __NR_clock_settime
#define SYS_clock_gettime __NR_clock_gettime
#define SYS_clock_getres __NR_clock_getres
#define SYS_clock_nanosleep __NR_clock_nanosleep
#define SYS_syslog __NR_syslog
#define SYS_ptrace __NR_ptrace
#define SYS_sched_setparam __NR_sched_setparam
#define SYS_sched_setscheduler __NR_sched_setscheduler
#define SYS_sched_getscheduler __NR_sched_getscheduler
#define SYS_sched_getparam __NR_sched_getparam
#define SYS_sched_setaffinity __NR_sched_setaffinity
#define SYS_sched_getaffinity __NR_sched_getaffinity
#define SYS_sched_yield __NR_sched_yield
#define SYS_sched_get_priority_max __NR_sched_get_priority_max
#define SYS_sched_get_priority_min __NR_sched_get_priority_min
#define SYS_sched_rr_get_interval __NR_sched_rr_get_interval
#define SYS_restart_syscall __NR_restart_syscall
#define SYS_kill __NR_kill
#define SYS_tkill __NR_tkill
#define SYS_tgkill __NR_tgkill
#define SYS_sigaltstack __NR_sigaltstack
#define SYS_rt_sigsuspend __NR_rt_sigsuspend
#define SYS_rt_sigaction __NR_rt_sigaction
#define SYS_rt_sigprocmask __NR_rt_sigprocmask
#define SYS_rt_sigpending __NR_rt_sigpending
#define SYS_rt_sigtimedwait __NR_rt_sigtimedwait
#define SYS_rt_sigqueueinfo __NR_rt_sigqueueinfo
#define SYS_rt_sigreturn __NR_rt_sigreturn
#define SYS_setpriority __NR_setpriority
#define SYS_getpriority __NR_getpriority
#define SYS_reboot __NR_reboot
#define SYS_setregid __NR_setregid
#define SYS_setgid __NR_setgid
#define SYS_setreuid __NR_setreuid
#define SYS_setuid __NR_setuid
#define SYS_setresuid __NR_setresuid
#define SYS_getresuid __NR_getresuid
#define SYS_setresgid __NR_setresgid
#define SYS_getresgid __NR_getresgid
#define SYS_setfsuid __NR_setfsuid
#define SYS_setfsgid __NR_setfsgid
#define SYS_times __NR_times
#define SYS_setpgid __NR_setpgid
#define SYS_getpgid __NR_getpgid
#define SYS_getsid __NR_getsid
#define SYS_setsid __NR_setsid
#define SYS_getgroups __NR_getgroups
#define SYS_setgroups __NR_setgroups
#define SYS_uname __NR_uname
#define SYS_sethostname __NR_sethostname
#define SYS_setdomainname __NR_setdomainname
#define SYS_getrlimit __NR_getrlimit
#define SYS_setrlimit __NR_setrlimit
#define SYS_getrusage __NR_getrusage
#define SYS_umask __NR_umask
#define SYS_prctl __NR_prctl
#define SYS_getcpu __NR_getcpu
#define SYS_gettimeofday __NR_gettimeofday
#define SYS_settimeofday __NR_settimeofday
#define SYS_adjtimex __NR_adjtimex
#define SYS_getpid __NR_getpid
#define SYS_getppid __NR_getppid
#define SYS_getuid __NR_getuid
#define SYS_geteuid __NR_geteuid
#define SYS_getgid __NR_getgid
#define SYS_getegid __NR_getegid
#define SYS_gettid __NR_gettid
#define SYS_sysinfo __NR_sysinfo
#define SYS_mq_open __NR_mq_open
#define SYS_mq_unlink __NR_mq_unlink
#define SYS_mq_timedsend __NR_mq_timedsend
#define SYS_mq_timedreceive __NR_mq_timedreceive
#define SYS_mq_notify __NR_mq_notify
#define SYS_mq_getsetattr __NR_mq_getsetattr
#define SYS_msgget __NR_msgget
#define SYS_msgctl __NR_msgctl
#define SYS_msgrcv __NR_msgrcv
#define SYS_msgsnd __NR_msgsnd
#define SYS_semget __NR_semget
#define SYS_semctl __NR_semctl
#define SYS_semtimedop __NR_semtimedop
#define SYS_semop __NR_semop
#define SYS_shmget __NR_shmget
#define SYS_shmctl __NR_shmctl
#define SYS_shmat __NR_shmat
#define SYS_shmdt __NR_shmdt
#define SYS_socket __NR_socket
#define SYS_socketpair __NR_socketpair
#define SYS_bind __NR_bind
#define SYS_listen __NR_listen
#define SYS_accept __NR_accept
#define SYS_connect __NR_connect
#define SYS_getsockname __NR_getsockname
#define SYS_getpeername __NR_getpeername
#define SYS_sendto __NR_sendto
#define SYS_recvfrom __NR_recvfrom
#define SYS_setsockopt __NR_setsockopt
#define SYS_getsockopt __NR_getsockopt
#define SYS_shutdown __NR_shutdown
#define SYS_sendmsg __NR_sendmsg
#define SYS_recvmsg __NR_recvmsg
#define SYS_readahead __NR_readahead
#define SYS_brk __NR_brk
#define SYS_munmap __NR_munmap
#define SYS_mremap __NR_mremap
#define SYS_add_key __NR_add_key
#define SYS_request_key __NR_request_key
#define SYS_keyctl __NR_keyctl
#define SYS_clone __NR_clone
#define SYS_execve __NR_execve
#define SYS_mmap2 __NR_mmap2
#define SYS_fadvise64_64 __NR_fadvise64_64
#define SYS_swapon __NR_swapon
#define SYS_swapoff __NR_swapoff
#define SYS_mprotect __NR_mprotect
#define SYS_msync __NR_msync
#define SYS_mlock __NR_mlock
#define SYS_munlock __NR_munlock
#define SYS_mlockall __NR_mlockall
#define SYS_munlockall __NR_munlockall
#define SYS_mincore __NR_mincore
#define SYS_madvise __NR_madvise
#define SYS_remap_file_pages __NR_remap_file_pages
#define SYS_mbind __NR_mbind
#define SYS_get_mempolicy __NR_get_mempolicy
#define SYS_set_mempolicy __NR_set_mempolicy
#define SYS_migrate_pages __NR_migrate_pages
#define SYS_move_pages __NR_move_pages
#define SYS_rt_tgsigqueueinfo __NR_rt_tgsigqueueinfo
#define SYS_perf_event_open __NR_perf_event_open
#define SYS_accept4 __NR_accept4
#define SYS_recvmmsg __NR_recvmmsg
#define SYS_or1k_atomic __NR_or1k_atomic
#define SYS_wait4 __NR_wait4
#define SYS_prlimit64 __NR_prlimit64
#define SYS_fanotify_init __NR_fanotify_init
#define SYS_fanotify_mark __NR_fanotify_mark
#define SYS_name_to_handle_at __NR_name_to_handle_at
#define SYS_open_by_handle_at __NR_open_by_handle_at
#define SYS_clock_adjtime __NR_clock_adjtime
#define SYS_syncfs __NR_syncfs
#define SYS_setns __NR_setns
#define SYS_sendmmsg __NR_sendmmsg
#define SYS_process_vm_readv __NR_process_vm_readv
#define SYS_process_vm_writev __NR_process_vm_writev
#define SYS_kcmp __NR_kcmp
#define SYS_finit_module __NR_finit_module
#define SYS_sched_setattr __NR_sched_setattr
#define SYS_sched_getattr __NR_sched_getattr
#define SYS_renameat2 __NR_renameat2
#define SYS_seccomp __NR_seccomp
#define SYS_getrandom __NR_getrandom
#define SYS_memfd_create __NR_memfd_create
#define SYS_bpf __NR_bpf
#define SYS_execveat __NR_execveat
#define SYS_userfaultfd __NR_userfaultfd
#define SYS_membarrier __NR_membarrier
