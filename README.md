### This is the repository for [GSoC 2019](https://summerofcode.withgoogle.com/projects/#5347867449884672) Project "Adapting TriforceAFL for NetBSD kernel fuzzing"

You can find an overall summary of the project, and track progress by going through the following reports:
- [GSoC 2019 1st Evaluation Report](http://blog.netbsd.org/tnf/entry/adapting_triforceafl_for_netbsd_part)
- [GSoC 2019 2nd Evaluation Report](http://blog.netbsd.org/tnf/entry/adapting_triforceafl_for_netbsd_part1)

The TriforceNetBSDSyscallFuzzer repo can be found [here](https://github.com/akulpillai/TriforceNetBSDSyscallFuzzer). You can find almost all of the relevant code and documentation there.

The pkgsrc-wip packages created during the project can be found here:
 - [wip/triforceafl](http://pkgsrc.se/wip/triforceafl)
 - [wip/triforcenetbsdsyscallfuzzer](http://pkgsrc.se/wip/triforcenetbsdsyscallfuzzer)

This repo acts as a mirror for these packages, corresponding commits can be seen [here](https://github.com/akulpillai/pkgsrc-wip/commits?author=vish-akul).

## Summary

TriforceAFL has been successfully adapted for NetBSD and a pkgsrc package for it has been updated. 
TriforceNetBSDSyscallFuzzer has also been created and made available in the form of wip/triforceaflnetbsdsyscallfuzzer.
Work will continue in updating TriforceAFL and TriforceNetBSDSyscallFuzzer to improve and optimize the fuzzer. The code will still be updated at the above mentioned links.

I would finally like to thank Kamil Rytarowski, my mentor for guiding me throughout the process and also The NetBSD Foundation and Google for giving me this wonderful opportunity.
