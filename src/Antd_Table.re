[@bs.module] external reactClass: ReasonReact.reactClass = "antd/lib/table";

[%bs.raw {|require("antd/lib/table/style")|}];

[@bs.deriving jsConverter]
type sizeType = [ | `default | `middle | `small];

/*
 bordered	Whether to show all table borders	boolean	false
 childrenColumnName	The column contains children to display	string[]	children
 columns	Columns of table	ColumnProps[]	-
 components	Override default table elements	TableComponents	-
 dataSource	Data record array to be displayed	any[]	-
 defaultExpandAllRows	Expand all rows initially	boolean	false
 defaultExpandedRowKeys	Initial expanded row keys	string[]	-
 expandedRowKeys	Current expanded row keys	string[]	-
 expandedRowRender	Expanded container render for each row	Function(record, index, indent, expanded):ReactNode	-
 expandRowByClick	Whether to expand row by clicking anywhere in the whole row	boolean	false
 footer	Table footer renderer	Function(currentPageData)
 indentSize	Indent size in pixels of tree data	number	15
 loading	Loading status of table	boolean|object (more)	false
 locale	i18n text including filter, sort, empty text, etc	object	filterConfirm: 'Ok'
 filterReset: 'Reset'
 emptyText: 'No Data'
 Default
 pagination	Pagination config or Pagination, hide it by setting it to false	object
 rowClassName	Row's className	Function(record, index):string	-
 rowKey	Row's unique key, could be a string or function that returns a string	string|Function(record):string	key
 rowSelection	Row selection config	object	null
 scroll	Set horizontal or vertical scrolling, can also be used to specify the width and height of the scroll area. It is recommended to set a number for x, if you want to set it to true, you need to add style .ant-table td { white-space: nowrap; }.	{ x: number | true, y: number }	-
 showHeader	Whether to show table header	boolean	true
 size	Size of table	default | middle | small	default
 title	Table title renderer	Function(currentPageData)
 onChange	Callback executed when pagination, filters or sorter is changed	Function(pagination, filters, sorter)
 onExpand	Callback executed when the row expand icon is clicked	Function(expanded, record)
 onExpandedRowsChange	Callback executed when the expanded rows change	Function(expandedRows)
 onHeaderRow	Set props on per header row	Function(column, index)	-
 onRow	Set props on per row	Function(record, index)	-

  */

/*
 export interface ColumnProps<T> {
   title?: React.ReactNode;
   key?: string;
   dataIndex?: string;
   render?: (text: any, record: T, index: number) => React.ReactNode;
   filters?: { text: string; value: string }[];
   onFilter?: (value: any, record: T) => boolean;
   filterMultiple?: boolean;
   filterDropdown?: React.ReactNode;
   sorter?: boolean | ((a: any, b: any) => number);
   colSpan?: number;
   width?: string | number;
   className?: string;
   fixed?: boolean | ('left' | 'right');
   filteredValue?: any[];
   sortOrder?: boolean | ('ascend' | 'descend');
 }
 */

[@bs.deriving abstract]
type columnParams = {
  .
  "title": React.element,
  "dataIndex": string,
  "key": string,
};

[@bs.obj]
external makeProps:
  (
    ~bordered: bool=?,
    ~childrenColumnName: array(string)=?,
    ~columns: array(columnParams)=?,
    ~dataSource: 'a=?,
    ~id: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    unit
  ) =>
  _ =
  "";

let make =
    (
      ~bordered=?,
      ~childrenColumnName=?,
      ~columns=?,
      ~dataSource=?,
      ~id=?,
      ~className=?,
      ~style=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~bordered?,
        ~childrenColumnName=?
          Js.Option.map((. b) => Array.of_list(b), childrenColumnName),
        ~columns=?Js.Option.map((. b) => Array.of_list(b), columns),
        ~dataSource=?Js.Option.map((. b) => Array.of_list(b), dataSource),
        ~id?,
        ~className?,
        ~style?,
        (),
      ),
    children,
  );

let make = make;