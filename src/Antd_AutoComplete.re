[%bs.raw {|require("antd/lib/auto-complete/style")|}];
[@bs.module "antd/lib/auto-complete"] [@react.component]
external make:
  (
    ~allowClear: bool=?,
    ~autoFocus: bool=?,
    ~backfill: bool=?,
    ~dataSource: array(string)=?,
    ~defaultActiveFirstOption: bool=?,
    ~defaultValue: string=?,
    ~disabled: bool=?,
    ~filterOption: bool=?,
    ~optionLabelProp: string=?,
    ~placeholder: string=?,
    ~value: string=?,
    ~onBlur: ReactEvent.Focus.t => unit=?,
    ~onChange: ReactEvent.Form.t => unit=?,
    ~onFocus: ReactEvent.Form.t => unit=?,
    ~onSearch: ReactEvent.Form.t => unit=?,
    ~onSelect: ReactEvent.Form.t => unit=?,
    ~defaultOpen: bool=?,
    ~open_: bool=?,
    ~onDropdownVisibleChange: string => unit=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?
  ) =>
  React.element =
  "default";

/*
 allowClear	Show clear button, effective in multiple mode only.	boolean	false
 autoFocus	get focus when component mounted	boolean	false
 backfill	backfill selected item the input when using keyboard	boolean	false
 children (for customize input element)	customize input element	HTMLInputElement / HTMLTextAreaElement / React.ReactElement	<Input />
 children (for dataSource)	Data source for autocomplet	React.ReactElement / Array<React.ReactElement>	-
 dataSource	Data source for autocomplete	DataSourceItemType[]
 defaultActiveFirstOption	Whether active first option by default	boolean	true
 defaultValue	Initial selected option.	string|string[]|{ key: string, label: string|ReactNode }|Array<{ key: string, label: string|ReactNode }>	-
 disabled	Whether disabled select	boolean	false
 filterOption	If true, filter options by input, if function, filter options against it. The function will receive two arguments, inputValue and option, if the function returns true, the option will be included in the filtered set; Otherwise, it will be excluded.	boolean or function(inputValue, option)	true
 optionLabelProp	Which prop value of option will render as content of select.	string	children
 placeholder	placeholder of input	string	-
 value	selected option	string|string[]|{ key: string, label: string|ReactNode }|Array<{ key: string, label: string|ReactNode }>	-
 onBlur	Called when leaving the component.	function()	-
 onChange	Called when select an option or input value change, or value of input is changed	function(value)	-
 onFocus	Called when entering the component	function()	-
 onSearch	Called when searching items.	function(value)	-
 onSelect	Called when a option is selected. param is option's value and option instance.	function(value, option)	-
 defaultOpen	Initial open state of dropdown	boolean	-
 open	Controlled open state of dropdown	boolean	-
 onDropdownVisibleChange	Call when dropdown open
 */