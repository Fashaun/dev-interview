
// Create Stack Class
function Stack() {
    var items = [];
    this.push = function(element) {
        items.push(element);
    }
    this.pop = function() {
        return items.pop();
    }
    this.peek = function() {
        return items[items.length - 1];
    }
    this.isEmpty = function() {
        return items.length === 0;
    }
    this.clear = function() {
        
        // Use redeclare to clear
        items = [];
    }
    this.size = function() {
        return items.length;
    }

    // for print result
    this.print = function() {
        console.log(items.toString());
    }
}

// New a stack object 
var stack = new Stack();
stack.push('三顧頻煩天下計');
stack.push('兩朝開濟老臣心');
stack.push('出師未捷身先死');
stack.push('長使英雄淚滿襟');
stack.pop();

// Control Stack by its method
console.log(stack.size());
console.log(stack.peek());
stack.clear();
console.log(stack.isEmpty());
