// rea decompile_all
// name: FUN_200f0d80
// address: 0x200f0d80
// body: available
// range: 0x200f0d80-0x200f0e19 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_200f0d80(int param_1,int param_2,int param_3)

{
  int *piVar1;
  char *_Str1;
  int iVar2;
  char *_Str2;
  DWORD DVar3;
  int iVar4;
  undefined4 *puVar5;
  
  piVar1 = *(int **)(param_1 + 900);
  do {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar4 = 0;
    if (0 < param_2) {
      puVar5 = (undefined4 *)(param_3 + 8);
      do {
        if (*piVar1 == puVar5[-2]) {
          _Str1 = (char *)*puVar5;
          if ((char *)puVar5[-1] == (char *)0x0) {
            iVar2 = piVar1[2];
          }
          else {
            if ((char *)piVar1[2] == (char *)0x0) goto LAB_200f0dec;
            iVar2 = __strcmpi((char *)puVar5[-1],(char *)piVar1[2]);
          }
          if (iVar2 == 0) {
            _Str2 = (char *)piVar1[3];
            if (_Str1 != (char *)0x0) {
              if (_Str2 == (char *)0x0) goto LAB_200f0dec;
              _Str2 = (char *)__strcmpi(_Str1,_Str2);
            }
            if (_Str2 == (char *)0x0) {
              DVar3 = GetTickCount();
              piVar1[1] = DVar3 + 30000;
              return piVar1;
            }
          }
        }
LAB_200f0dec:
        iVar4 = iVar4 + 1;
        puVar5 = puVar5 + 3;
      } while (iVar4 < param_2);
    }
    piVar1 = (int *)piVar1[9];
  } while( true );
}

