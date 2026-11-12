// rea decompile_all
// name: FFC10.DLL::CFeelPeriodic::InitializePolar
// address: 0x200f9752
// body: available
// range: 0x200f9752-0x200f9757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall
CFeelPeriodic::InitializePolar
          (CFeelPeriodic *this,CFeelDevice *param_1,ulong param_2,ulong param_3,ulong param_4,
          long param_5,long param_6,ulong param_7,FEELIT_ENVELOPE *param_8)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x200f9752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = InitializePolar(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return iVar1;
}

