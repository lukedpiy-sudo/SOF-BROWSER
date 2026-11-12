// rea decompile_all
// name: FUN_2004f5b0
// address: 0x2004f5b0
// body: available
// range: 0x2004f5b0-0x2004f733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_2004f5b0(void)

{
  int iVar1;
  
  iVar1 = Ordinal_111();
  if (iVar1 < 0x2744) {
    if (iVar1 == 0x2743) {
      return s_WSAENETUNREACH_20137254;
    }
    switch(iVar1) {
    case 0x2714:
      return s_WSAEINTR_2013739c;
    case 0x2719:
      return s_WSAEBADF_20137390;
    case 0x271d:
      return s_WSAEACCES_20137384;
    case 0x271e:
      return s_WSAEFAULT_20137378;
    case 0x2726:
      return s_WSAEINVAL_2013736c;
    case 0x2728:
      return s_WSAEMFILE_20137360;
    case 0x2733:
      return s_WSAEWOULDBLOCK_20137350;
    case 0x2734:
      return s_WSAEINPROGRESS_20137340;
    case 0x2735:
      return s_WSAEALREADY_20137334;
    case 0x2736:
      return s_WSAENOTSOCK_20137328;
    case 0x2737:
      return s_WSAEDESTADDRREQ_20137318;
    case 0x2738:
      return s_WSAEMSGSIZE_2013730c;
    case 0x2739:
      return s_WSAEPROTOTYPE_201372fc;
    case 0x273a:
      return s_WSAENOPROTOOPT_201372ec;
    case 0x273b:
      return s_WSAEPROTONOSUPPORT_201372d8;
    case 0x273c:
      return s_WSAESOCKTNOSUPPORT_201372c4;
    case 0x273d:
      return s_WSAEOPNOTSUPP_201372b4;
    case 0x273e:
      return s_WSAEPFNOSUPPORT_201372a4;
    case 0x273f:
      return s_WSAEAFNOSUPPORT_20137294;
    case 0x2740:
      return s_WSAEADDRINUSE_20137284;
    case 0x2741:
      return s_WSAEADDRNOTAVAIL_20137270;
    case 0x2742:
      return s_WSAENETDOWN_20137264;
    }
  }
  else if (iVar1 < 0x276c) {
    if (iVar1 == 0x276b) {
      return s_WSASYSNOTREADY_2013717c;
    }
    switch(iVar1) {
    case 0x2744:
      return s_WSAENETRESET_20137244;
    case 0x2745:
      return s_WSWSAECONNABORTEDAEINTR_2013722c;
    case 0x2746:
      return s_WSAECONNRESET_2013721c;
    case 0x2747:
      return s_WSAENOBUFS_20137210;
    case 0x2748:
      return s_WSAEISCONN_20137204;
    case 0x2749:
      return s_WSAENOTCONN_201371f8;
    case 0x274a:
      return s_WSAESHUTDOWN_201371e8;
    case 0x274b:
      return s_WSAETOOMANYREFS_201371d8;
    case 0x274c:
      return s_WSAETIMEDOUT_201371c8;
    case 0x274d:
      return s_WSAECONNREFUSED_201371b8;
    case 0x274e:
      return s_WSAELOOP_201371ac;
    case 0x274f:
      return s_WSAENAMETOOLONG_2013719c;
    case 0x2750:
      return s_WSAEHOSTDOWN_2013718c;
    }
  }
  else if (iVar1 < 0x2afa) {
    if (iVar1 == 0x2af9) {
      return s_WSAHOST_NOT_FOUND_20137134;
    }
    if (iVar1 == 0x276c) {
      return s_WSAVERNOTSUPPORTED_20137148;
    }
    if (iVar1 == 0x276d) {
      return s_WSANOTINITIALISED_2013715c;
    }
    if (iVar1 == 0x2775) {
      return s_WSAEDISCON_20137170;
    }
  }
  else {
    if (iVar1 == 0x2afa) {
      return s_WSATRY_AGAIN_201370fc;
    }
    if (iVar1 == 0x2afb) {
      return s_WSANO_RECOVERY_2013710c;
    }
    if (iVar1 == 0x2afc) {
      return s_WSANO_DATA_2013711c;
    }
  }
  return s_NO_ERROR_20137128;
}

