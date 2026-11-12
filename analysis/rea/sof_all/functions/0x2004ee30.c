// rea decompile_all
// name: FUN_2004ee30
// address: 0x2004ee30
// body: available
// range: 0x2004ee30-0x2004f080 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2004ee30(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined2 extraout_var;
  
  iVar2 = Cvar_Get(&DAT_20136f6c,s_localhost_2011d7dc,8,0);
  FUN_200216d0(s_dedicated_20121588);
  iVar3 = __ftol();
  if (DAT_2039011c == 0) {
    Cvar_Get(s_ip_hostport_20136f60,&DAT_2011c4ac,8,0);
    iVar4 = __ftol();
    if (iVar4 == 0) {
      Cvar_Get(s_hostport_20136f54,&DAT_2011c4ac,8,0);
      iVar4 = __ftol();
      if (iVar4 == 0) {
        uVar5 = FUN_20055450(&DAT_2011ee58,0x70ee,8,0);
        Cvar_Get(&DAT_20136f4c,uVar5);
        iVar4 = __ftol();
      }
    }
    DAT_2039011c = FUN_2004ecb0(*(undefined4 *)(iVar2 + 4),iVar4);
    _DAT_2036fef0 = 0x10;
    Ordinal_6(DAT_2039011c,&DAT_203900c0,&DAT_2036fef0);
    if ((((DAT_203900c4 == '\0') && (DAT_203900c5 == '\0')) && (DAT_203900c6 == '\0')) &&
       (DAT_203900c7 == '\0')) {
      DAT_203900c4 = (&DAT_20390144)[DAT_2039015c * 4];
      DAT_203900c5 = (&DAT_20390145)[DAT_2039015c * 4];
      DAT_203900c6 = (&DAT_20390146)[DAT_2039015c * 4];
      DAT_203900c7 = (&DAT_20390147)[DAT_2039015c * 4];
    }
    if (DAT_2039011c == 0) {
      if (iVar3 == 0) goto LAB_2004ef83;
      Com_Error(0,s_Couldn_t_allocate_dedicated_serv_20136f20);
    }
  }
  if (iVar3 != 0) {
    return;
  }
LAB_2004ef83:
  if (DAT_20390118 == 0) {
    Cvar_Get(s_ip_clientport_20136f10,&DAT_2011c4ac,8,0);
    iVar3 = __ftol();
    if (iVar3 == 0) {
      uVar5 = FUN_20055450(&DAT_2011ee58,0x70e5,8,0);
      Cvar_Get(s_clientport_20136f04,uVar5);
      iVar3 = __ftol();
      if (iVar3 == 0) {
        iVar3 = -1;
      }
    }
    DAT_20390160 = (undefined2)iVar3;
    DAT_20390118 = FUN_2004ecb0(*(undefined4 *)(iVar2 + 4),iVar3);
    if (DAT_20390118 == 0) {
      DAT_20390118 = FUN_2004ecb0(*(undefined4 *)(iVar2 + 4),0xffffffff);
    }
    if (*(float *)(DAT_20390134 + 0x18) != 0.0) {
      DAT_20390164 = operator_new(0x20);
      if (DAT_20390164 == (undefined4 *)0x0) {
        DAT_20390164 = (undefined4 *)0x0;
      }
      else {
        *DAT_20390164 = &PTR_FUN_20111e50;
        *(undefined1 *)(DAT_20390164 + 1) = 0;
        DAT_20390164[2] = 0xffffffff;
      }
      cVar1 = FUN_2004d830(CONCAT22(extraout_var,DAT_20390160));
      if (cVar1 == '\0') {
        if (DAT_20390164 != (undefined4 *)0x0) {
          (**(code **)*DAT_20390164)(1);
        }
        DAT_20390164 = (undefined4 *)0x0;
      }
    }
  }
  return;
}

