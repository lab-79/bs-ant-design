open Antd;

let str = React.string;

let columns: array(Table.columnParams) = [|
  {
    "title": "Name" |> str,
    "dataIndex": "name",
    "key": "name",
    "render": (text, _v) => <a href="javascript:;"> {text |> str} </a>,
  },
  {
    "title": "Age" |> str,
    "dataIndex": "age",
    "key": "age",
    "render": (text, _v) => text |> str,
  },
  {
    "title": "Address" |> str,
    "dataIndex": "address",
    "key": "address",
    "render": (text, _v) => text |> str,
  },
  {
    "title": "Tags" |> str,
    "key": "tags",
    "dataIndex": "tags",
    "render": (text, _v) => text |> str,
    //   render: tags => (
    //     <span>
    //       {tags.map(tag => {
    //         let color = tag.length > 5 ? "geekblue" : "green";
    //         if (tag === "loser") {
    //           color = "volcano";
    //         }
    //         return <Tag color={color} key={tag}>{tag.toUpperCase()}</Tag>;
    //       })}
    //     </span>
    //   ),
  },
  {
    "title": "Action" |> str,
    "key": "action",
    "dataIndex": "action",
    "render": (text, record) =>
      <span>
        <a href="javascript:;"> {"Invite" ++ record##name |> str} </a>
        <Divider _type=`vertical />
        <a href="javascript:;"> {"Delete" |> str} </a>
      </span>,
  },
|];

let data = [|
  {
    "key": "1",
    "name": "John Brown",
    "age": 32,
    "address": "New York No. 1 Lake Park",
    "tags": ["nice", "developer"],
  },
  {
    "key": "2",
    "name": "Jim Green",
    "age": 42,
    "address": "London No. 1 Lake Park",
    "tags": ["loser"],
  },
  {
    "key": "3",
    "name": "Joe Black",
    "age": 32,
    "address": "Sidney No. 1 Lake Park",
    "tags": ["cool", "teacher"],
  },
|];

[@react.component]
let make = () =>
  <Section name="Table"> <Table columns dataSource=data /> </Section>;