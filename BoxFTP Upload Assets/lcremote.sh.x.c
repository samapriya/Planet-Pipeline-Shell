#if 0
	shc Version 3.8.9b, Generic Script Compiler
	Copyright (c) 1994-2015 Francisco Rosales <frosal@fi.upm.es>

	shc -f lcremote.sh 
#endif

static  char data [] = 
#define      rlax_z	1
#define      rlax	((&data[0]))
	"\327"
#define      inlo_z	3
#define      inlo	((&data[1]))
	"\177\033\045"
#define      text_z	243
#define      text	((&data[30]))
	"\247\362\003\042\323\144\174\072\337\266\067\210\063\211\277\321"
	"\100\072\225\232\327\312\126\375\026\251\222\126\036\123\135\123"
	"\020\356\130\347\370\224\076\255\155\112\102\121\263\343\143\153"
	"\057\056\216\160\306\273\112\220\175\255\361\200\151\321\275\225"
	"\142\374\357\017\156\125\155\131\366\365\232\320\363\126\115\334"
	"\302\207\345\312\120\326\264\163\244\100\066\056\125\061\043\332"
	"\375\056\001\357\035\262\023\256\205\124\322\151\176\157\356\205"
	"\215\062\311\171\107\326\055\052\025\054\306\164\252\205\354\124"
	"\356\061\277\050\212\262\044\276\074\307\303\116\331\251\220\211"
	"\315\166\175\351\310\214\144\175\200\166\354\066\203\061\124\156"
	"\323\374\032\351\234\367\240\311\014\066\242\261\344\262\326\033"
	"\061\162\042\035\111\245\202\117\034\101\335\112\156\260\023\336"
	"\232\065\130\152\170\116\001\322\173\005\040\103\176\310\367\255"
	"\347\335\370\004\362\016\305\004\170\172\300\361\005\226\017\066"
	"\161\027\202\006\055\264\226\015\372\325\314\142\236\134\310\220"
	"\220\066\110\216\276\016\265\333\342\321\346\123\036\054\306\154"
	"\172\157\211\120\337\222\004\346\300\344\332\215\112\166\351\205"
	"\346\306\054\330\311\117\254\055\314\346\014\202\036\225\265\247"
	"\125\207\347\217\035\202\147\347\330\144\375\201\332\347\007\301"
	"\256\064\232\167\203\106\245\117\055\262\321\113\107\207\362\234"
	"\016"
#define      tst2_z	19
#define      tst2	((&data[325]))
	"\142\026\170\014\175\107\105\305\121\330\257\224\227\270\041\353"
	"\161\176\335"
#define      xecc_z	15
#define      xecc	((&data[346]))
	"\065\367\305\232\065\050\072\300\171\041\152\310\071\165\232\370"
	"\215"
#define      msg1_z	42
#define      msg1	((&data[368]))
	"\371\276\223\247\363\055\037\356\152\351\127\177\051\234\244\257"
	"\255\123\064\165\207\227\347\305\234\240\042\112\344\171\246\056"
	"\025\276\204\124\217\355\211\045\353\156\174\251\372\203\324\213"
	"\120\167\164\304\307\241\167\231\354\276"
#define      date_z	1
#define      date	((&data[419]))
	"\100"
#define      shll_z	10
#define      shll	((&data[422]))
	"\133\027\334\077\001\322\356\153\141\316\370\245\032"
#define      lsto_z	1
#define      lsto	((&data[433]))
	"\215"
#define      tst1_z	22
#define      tst1	((&data[434]))
	"\004\121\154\006\103\264\300\215\106\257\075\106\014\036\203\353"
	"\365\346\065\155\257\052\172\302\170\042\265"
#define      msg2_z	19
#define      msg2	((&data[462]))
	"\032\312\006\341\360\077\061\116\164\167\202\262\203\166\226\016"
	"\125\275\241\242"
#define      pswd_z	256
#define      pswd	((&data[542]))
	"\176\215\250\074\255\210\230\335\102\037\070\131\072\250\245\115"
	"\051\251\061\244\153\252\306\041\120\010\116\152\017\102\046\215"
	"\320\316\312\175\126\142\133\231\201\224\362\274\074\230\011\146"
	"\101\073\012\255\345\320\317\066\331\035\240\350\140\170\003\047"
	"\040\153\074\335\141\372\051\045\061\202\024\175\304\071\346\340"
	"\361\317\107\050\267\017\200\152\126\054\315\152\244\320\221\305"
	"\074\316\242\236\310\313\303\372\116\327\170\022\021\137\363\003"
	"\056\072\054\345\112\254\120\240\331\035\013\175\356\235\102\052"
	"\153\345\310\064\261\214\057\377\144\247\022\165\006\006\171\065"
	"\101\245\033\213\122\153\053\053\211\066\251\167\324\354\242\077"
	"\321\153\164\203\367\244\202\134\113\225\321\122\233\113\210\334"
	"\361\243\147\104\016\223\157\227\312\031\017\236\006\262\336\330"
	"\035\122\133\025\367\336\161\103\163\102\225\017\216\035\354\177"
	"\300\123\303\317\347\063\147\261\115\166\117\123\050\055\053\105"
	"\200\206\132\167\144\313\272\330\016\120\347\235\156\323\034\057"
	"\047\340\376\016\023\145\300\140\334\017\264\005\075\337\112\276"
	"\146\245\066\312\161\361\243\200\101\213\035\260\136\072\337\206"
	"\032\336\225\055\104\125\216\040\145\102\045\242\042\160\141\210"
	"\026\227\123\210\211\366\010\312\202\046\173\340\140\132\147\173"
	"\071\374\251\175\121\067\236\267\172\304\132\234\064\307\165\060"
	"\225\077\256\354\242\012\205\044\236\170\340\333\020\352\101\122"
	"\046\113\000\013\034\317\102\366\355\343\336\115\252\124\176\077"
	"\224\055\054\066\067\262\132\325\052\072\260\073"
#define      chk1_z	22
#define      chk1	((&data[850]))
	"\113\076\216\127\133\361\330\260\074\352\260\054\304\014\334\334"
	"\372\101\357\321\154\017\302\271\256\064\367\135\231\121"
#define      opts_z	1
#define      opts	((&data[875]))
	"\201"
#define      chk2_z	19
#define      chk2	((&data[876]))
	"\171\270\307\253\365\110\240\255\012\025\214\113\260\310\066\313"
	"\100\352\045\026\146"/* End of data[] */;
#define      hide_z	4096
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	0	/* Define as 1 to enable ptrace the executable */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask  = (unsigned long)&chkenv;
	mask ^= (unsigned long)getpid() * ~mask;
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

#if !defined(TRACEABLE)

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
#	define PTRACE_ATTACH	PT_ATTACH
#endif
void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PTRACE_ATTACH, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !defined(TRACEABLE) */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];

	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	ret = chkenv(argc);
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
	varg[j++] = argv[0];		/* My own name at execution */
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if !defined(TRACEABLE)
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
