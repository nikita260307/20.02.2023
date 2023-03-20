
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Table {
public:
    Table(string name) : m_name(name) {}

    void addRow(vector<string> row) {
        m_rows.push_back(row);
    }

    void removeRow(int index) {
        if (index < m_rows.size()) {
            m_rows.erase(m_rows.begin() + index);
        }
    }

    void printTable() {
        cout << "Table: " << m_name << endl;

        for (int i = 0; i < m_rows.size(); i++) {
            for (int j = 0; j < m_rows[i].size(); j++) {
                cout << m_rows[i][j] << "\t";
            }
            cout << endl;
        }
    }

private:
    vector<vector<string>> m_rows;
    string m_name;
};

int main() {
    Table myTable("myTable");

    vector<string> row1 = { "John", "Doe", "35" };
    vector<string> row2 = { "Jane", "Doe", "32" };
    myTable.addRow(row1);
    myTable.addRow(row2);

    myTable.printTable();

    myTable.removeRow(1);

    myTable.printTable();

    return 0;
}